/*
 * FDCAN.cpp
 *
 *  Created on: Jul 2, 2020
 *      Author: tequilajohn
 */
#include "FDCAN.h"
#include "main.h"
#include <string.h> // for memset
//#include "stm32h7xx_hal.h"
FDCAN::hardware_resource_t *FDCAN::resFDCAN1 = 0;

// Necessary to export for compiler to generate code to be called by the interrupt vector
extern "C" __EXPORT void FDCAN1_IT0_IRQHandler(void);
extern "C" __EXPORT void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs);
extern "C" __EXPORT void HAL_FDCAN_RxBufferNewMessageCallback(FDCAN_HandleTypeDef *hfdcan);
extern "C" __EXPORT void HAL_FDCAN_TxFifoEmptyCallback(FDCAN_HandleTypeDef *hfdcan);
extern "C" __EXPORT void HAL_FDCAN_TxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);

/* Initalize shit  */
uint8_t FDCAN::RX_test[8];
/* Initializing function */
FDCAN::FDCAN(void)
{
	InitPeripheral();
	ConfigurePeripheral();
	_waitingForReply = false;
}

FDCAN::~FDCAN()
{
	if (!_hRes)
		return;

	_hRes->instances--;
	if (_hRes->instances == 0)
	{ // deinitialize port and peripherals
		DeInitiPeripheral();

		// Delete hardware resource
		port_t tmpPort = _hRes->port;
		//		delete _hRes; TK shit

		switch (tmpPort)
		{
		case PORT_FDCAN1:
			resFDCAN1 = 0;
			break;
		default:
			//				ERROR("Undefined FDCAN port");
			return;
		}
	}
}

void FDCAN::DeInitiPeripheral()
{
	if (!_hRes)
		return;
	if (_hRes->port == PORT_FDCAN1)
	{
		/* Peripheral clock disable */
		__HAL_RCC_FDCAN_CLK_DISABLE();
		/* Deinitialize port */
		/**FDCAN GPIO Configuration
				PD1     ------> FDCAN1_TX
				PD0     ------> FDCAN1_RX
		 */
		HAL_GPIO_DeInit(FDCAN1_TX_GPIO_Port, FDCAN1_RX_Pin | FDCAN1_TX_Pin);
		/* Deactivate interruptions*/

		HAL_NVIC_DisableIRQ(FDCAN1_IT0_IRQn);
	}
}

void FDCAN::InitPeripheral()
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	port_t port = PORT_FDCAN1;
	bool firstTime = false;
	if (!resFDCAN1)
	{
		resFDCAN1 = new FDCAN::hardware_resource_t;
		memset(resFDCAN1, 0, sizeof(FDCAN::hardware_resource_t));
		firstTime = true;
		_hRes = resFDCAN1;
	}
	if (firstTime)
	{ // first time configuring peripheral
		_hRes->port = port;
		_hRes->configured = false;
		_hRes->instances = 0;
		/* Real time stuff to add later
		if (_hRes->resourceSemaphore == NULL) {
			_hRes = 0;
			ERROR("Could not create I2C resource semaphore");
			return;
		}
		vQueueAddToRegistry(_hRes->resourceSemaphore, "I2C Resource");
		xSemaphoreGive( _hRes->resourceSemaphore ); // give the semaphore the first time
		_hRes->transmissionFinished = xSemaphoreCreateBinary();
		if (_hRes->transmissionFinished == NULL) {
			_hRes = 0;
			ERROR("Could not create I2C transmission semaphore");
			return;
		}
		vQueueAddToRegistry(_hRes->transmissionFinished, "I2C Finish");
		xSemaphoreGive( _hRes->transmissionFinished ); // ensure that the semaphore is not taken from the beginning
		xSemaphoreTake( _hRes->transmissionFinished, ( TickType_t ) portMAX_DELAY ); // ensure that the semaphore is not taken from the beginning
		*/
		// COnfigure pins for I2C accordingly
		if (port == PORT_FDCAN1)
		{
			__HAL_RCC_GPIOD_CLK_ENABLE();
			/**FDCAN GPIO Configuration
							PD1     ------> FDCAN1_TX
							PD0     ------> FDCAN1_RX
			 */
			GPIO_InitStruct.Pin = FDCAN1_TX_Pin;
			GPIO_InitStruct.Mode = GPIO_MODE_AF_PP; // Alternate Function Push Pull
			GPIO_InitStruct.Pull = GPIO_PULLUP;
			GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
			GPIO_InitStruct.Alternate = GPIO_AF9_FDCAN1;
			HAL_GPIO_Init(FDCAN1_TX_GPIO_Port, &GPIO_InitStruct);


			GPIO_InitStruct.Pin = FDCAN1_RX_Pin;
			GPIO_InitStruct.Mode = GPIO_MODE_AF_PP; // Alternate Function Push Pull
			GPIO_InitStruct.Pull = GPIO_PULLUP;
			GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
			GPIO_InitStruct.Alternate = GPIO_AF9_FDCAN1;
			HAL_GPIO_Init(FDCAN1_RX_GPIO_Port, &GPIO_InitStruct);

			/* Peripheral clock enable*/
			__HAL_RCC_FDCAN_CLK_ENABLE();

			/* NVIC for FDCAN */
			HAL_NVIC_SetPriority(FDCAN1_IT0_IRQn, 0, 0);
			HAL_NVIC_EnableIRQ(FDCAN1_IT0_IRQn);
		}
	}
	_hRes->instances++;
	//	TxHeader.Identifier = 0x321;
	TxHeader.IdType = FDCAN_STANDARD_ID;
	TxHeader.TxFrameType = FDCAN_DATA_FRAME;
	//	TxHeader.DataLength = FDCAN_DLC_BYTES_3;
	TxHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
	TxHeader.BitRateSwitch = FDCAN_BRS_OFF;
	TxHeader.FDFormat = FDCAN_CLASSIC_CAN;
	TxHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;
	TxHeader.MessageMarker = 0;
}
void FDCAN::ConfigurePeripheral()
{

	if (!_hRes->configured)
	{ // only configured peripheral once
		switch (_hRes->port)
		{
		case PORT_FDCAN1:
			_hRes->handle.Instance = FDCAN1;
			break;
		default:
			return;
		}
		_hRes->handle.Init.FrameFormat = FDCAN_FRAME_CLASSIC;
		_hRes->handle.Init.Mode = FDCAN_MODE_NORMAL;
		_hRes->handle.Init.AutoRetransmission = ENABLE;
		_hRes->handle.Init.TransmitPause = DISABLE;
		_hRes->handle.Init.ProtocolException = ENABLE;
		/* for 64 Mhz */
		_hRes->handle.Init.NominalPrescaler = 4;
		_hRes->handle.Init.NominalSyncJumpWidth = 1;
		_hRes->handle.Init.NominalTimeSeg1 = 13;
		_hRes->handle.Init.NominalTimeSeg2 = 2;

		/* for 128 MHz*/
		_hRes->handle.Init.NominalPrescaler = 8;
		_hRes->handle.Init.NominalSyncJumpWidth = 4;
		_hRes->handle.Init.NominalTimeSeg1 = 13;
		_hRes->handle.Init.NominalTimeSeg2 = 2;

		/* for 8 Mhz*/
		_hRes->handle.Init.NominalPrescaler = 1;
		_hRes->handle.Init.NominalSyncJumpWidth = 1;
		_hRes->handle.Init.NominalTimeSeg1 = 5; //6;
		_hRes->handle.Init.NominalTimeSeg2 = 2; //1;

		/* for 10 Mhz */
		_hRes->handle.Init.NominalPrescaler = 1;
		_hRes->handle.Init.NominalSyncJumpWidth = 1;
		_hRes->handle.Init.NominalTimeSeg1 = 8; //8; //6;
		_hRes->handle.Init.NominalTimeSeg2 = 1; //1; //1;

		/* for 16 Mhz */
//		_hRes->handle.Init.NominalPrescaler = 2;
//		_hRes->handle.Init.NominalSyncJumpWidth = 1;
//		_hRes->handle.Init.NominalTimeSeg1 = 6; //8; //6;
//		_hRes->handle.Init.NominalTimeSeg2 = 1; //1; //1;

//		/* for 40 Mhz */
		_hRes->handle.Init.NominalPrescaler = 0x1;
		_hRes->handle.Init.NominalSyncJumpWidth = 0x8;
		_hRes->handle.Init.NominalTimeSeg1 = 0x1F; //8; //6;
		_hRes->handle.Init.NominalTimeSeg2 = 0x8; //1; //1;


//		_hRes->handle.Init.DataPrescaler = 2;
//		_hRes->handle.Init.DataSyncJumpWidth = 2;
//		_hRes->handle.Init.DataTimeSeg1 = 6; // 6
//		_hRes->handle.Init.DataTimeSeg2 = 1; //1;

		_hRes->handle.Init.MessageRAMOffset = 0;
		_hRes->handle.Init.StdFiltersNbr = 1;
		_hRes->handle.Init.ExtFiltersNbr = 0;
		_hRes->handle.Init.RxFifo0ElmtsNbr = 20;
		_hRes->handle.Init.RxFifo0ElmtSize = FDCAN_DATA_BYTES_8;
		_hRes->handle.Init.RxFifo1ElmtsNbr = 0;
		_hRes->handle.Init.RxFifo1ElmtSize = FDCAN_DATA_BYTES_8;
		_hRes->handle.Init.RxBuffersNbr = 0;
		_hRes->handle.Init.RxBufferSize = FDCAN_DATA_BYTES_8;
		_hRes->handle.Init.TxEventsNbr = 0;
		_hRes->handle.Init.TxBuffersNbr = 1;
		_hRes->handle.Init.TxFifoQueueElmtsNbr = 1;
		_hRes->handle.Init.TxFifoQueueMode = FDCAN_TX_FIFO_OPERATION;
		_hRes->handle.Init.TxElmtSize = FDCAN_DATA_BYTES_8;
		/* delay is dataseg1 * prescale */
//		HAL_FDCAN_ConfigTxDelayCompensation(&_hRes->handle, 7, 0);
//		HAL_FDCAN_ConfigTxDelayCompensation(&_hRes->handle, 16, 5);
//		HAL_FDCAN_ConfigTxDelayCompensation(&_hRes->handle, 2, 0); // for 16Mhz clock source
		HAL_FDCAN_ConfigTxDelayCompensation(&_hRes->handle, 5, 0); // for 40Mhz clock source
		HAL_FDCAN_ConfigTxDelayCompensation(&_hRes->handle, 3, 0); // for 40Mhz clock source
		HAL_FDCAN_EnableTxDelayCompensation(&_hRes->handle);

		FDCAN_FilterTypeDef sFilterConfig;
		/* Configure Rx filter */
		sFilterConfig.IdType = FDCAN_STANDARD_ID;
		sFilterConfig.FilterIndex = 0;
		sFilterConfig.FilterType = FDCAN_FILTER_RANGE;
		sFilterConfig.FilterConfig = FDCAN_FILTER_TO_RXFIFO0;
		//		sFilterConfig.FilterConfig = FDCAN_FILTER_TO_RXBUFFER;
		//
		//		sFilterConfig.FilterConfig = FDCAN_FILTER_DISABLE;

		sFilterConfig.FilterID1 = 0x01;
		sFilterConfig.FilterID2 = 0x7FF;
		if (HAL_FDCAN_Init(&_hRes->handle) != HAL_OK)
		{
			Error_Handler();
		}

		if (HAL_FDCAN_ConfigFilter(&_hRes->handle, &sFilterConfig) != HAL_OK)
		{
			/* Filter configuration Error */
			Error_Handler();
		}

		/* START THE CAN MODULE */
		if (HAL_FDCAN_Start(&_hRes->handle) != HAL_OK)
		{
			/* Start Error */
			Error_Handler();
		}
		if (HAL_FDCAN_ActivateNotification(&_hRes->handle, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK)
		{
			/* Notification Error */
			Error_Handler();
		}
//		if (HAL_FDCAN_ActivateNotification(&_hRes->handle, FDCAN_IT_TX_COMPLETE, 0) != HAL_OK)
//		{
//			/* Notification Error */
//			Error_Handler();
//		}
	}
	if (!_hRes)
		return; /* only here works */
}
uint32_t FDCAN::GetRxFiFoLevel()
{
	uint32_t FifofillLevel = 0;
	FifofillLevel = HAL_FDCAN_GetRxFifoFillLevel(&_hRes->handle, FDCAN_RX_FIFO0);
	return FifofillLevel;
}

void FDCAN::WriteDummyData(uint8_t data)
{
	TxHeader.Identifier = 0x111;
	TxHeader.DataLength = FDCAN_DLC_BYTES_6;
	TxHeader.DataLength = FDCAN_DLC_BYTES_5;
	TxData[0] = 0x11;
	TxData[1] = 0x11;
	TxData[2] = 0x11;
	TxData[3] = 0x11;
	TxData[4] = data;

	if (HAL_FDCAN_AddMessageToTxFifoQ(&_hRes->handle, &TxHeader, TxData) != HAL_OK)
	{
		TxData[1] = 0x2;
		/*Transmission request Error*/
		Error_Handler();
	}
}
void FDCAN::WriteMessage(uint32_t id, uint8_t len, uint8_t d0, uint8_t d1,
						 uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7)
{
	TxHeader.Identifier = id;
	/* The length is cap by CAN Classic frame up to 8 bytes*/
	switch (len)
	{
	case 0:
		TxHeader.DataLength = FDCAN_DLC_BYTES_0;
		break;
	case 1:
		TxHeader.DataLength = FDCAN_DLC_BYTES_1;
		break;
	case 2:
		TxHeader.DataLength = FDCAN_DLC_BYTES_2;
		break;
	case 3:
		TxHeader.DataLength = FDCAN_DLC_BYTES_3;
		break;
	case 4:
		TxHeader.DataLength = FDCAN_DLC_BYTES_4;
		break;
	case 5:
		TxHeader.DataLength = FDCAN_DLC_BYTES_5;
		break;
	case 6:
		TxHeader.DataLength = FDCAN_DLC_BYTES_6;
		break;
	case 7:
		TxHeader.DataLength = FDCAN_DLC_BYTES_7;
		break;
	case 8:
		TxHeader.DataLength = FDCAN_DLC_BYTES_8;
		break;
	default:
		TxHeader.DataLength = FDCAN_DLC_BYTES_0;
	}
	TxData[0] = d0;
	TxData[1] = d1;
	TxData[2] = d2;
	TxData[3] = d3;
	TxData[4] = d4;
	TxData[5] = d5;
	TxData[6] = d6;
	TxData[7] = d7;
	// Send message if the fifo is ready
//	while(isPending(FiFoLatestTxRequest())){}
	if (HAL_FDCAN_AddMessageToTxFifoQ(&_hRes->handle, &TxHeader, TxData) != HAL_OK)
	{
		TxData[1] = 0x2;
		/*Transmission request Error*/
		Error_Handler();
	}
//	while(isPending(FiFoLatestTxRequest())){ HAL_Delay(1);}
	HAL_Delay(1);
	//	if(HAL_FDCAN_AddMessageToTxFifoQ(&_hRes->handle, &TxHeader, TxData) != HAL_OK)
	//		{
	//			TxData[1] = 0x2;
	//			/*Transmission request Error*/
	//			Error_Handler();
	//		}
	//	FDCAN_RxHeaderTypeDef RxHeader;
	//	uint8_t RxData[8];
	/*
	HAL_FDCAN_GetRxMessage(&_hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData);

	if (HAL_FDCAN_GetRxFifoFillLevel(&_hRes->handle, FDCAN_RX_FIFO0) > 0) {

		/* Retrieve Rx messages from RX FIFO0 */
	/*		HAL_FDCAN_GetRxMessage(&_hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData);
		HAL_FDCAN_GetRxMessage(&_hRes->handle, FDCAN_RX_FIFO0, &RxHeader, &RxData[8]);
	}
*/
	// wait until message is sent
	//	while(isPending(FiFoLatestTxRequest())){}
}

void FDCAN::Read(FDCAN_RxHeaderTypeDef *pRxHeader, uint8_t *pRxData)
{
	//	int a;
	if (HAL_FDCAN_GetRxMessage(&_hRes->handle, FDCAN_RX_FIFO0, pRxHeader, pRxData) != HAL_OK)
	{
		Error_Handler();
	}
	//	if (HAL_FDCAN_ActivateNotification(&_hRes->handle, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK)
	if (HAL_FDCAN_ActivateNotification(&_hRes->handle, FDCAN_IT_RX_BUFFER_NEW_MESSAGE, 0) != HAL_OK)
	{
		/* Notification Error */
		Error_Handler();
	}
}
void FDCAN::Read()
{
	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8];
	if (HAL_FDCAN_GetRxMessage(&_hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData) != HAL_OK)
	{
		Error_Handler();
	}
}

uint32_t FDCAN::FiFoLatestTxRequest()
{
	return HAL_FDCAN_GetLatestTxFifoQRequestBuffer(&_hRes->handle);
}

uint32_t FDCAN::isPending(uint32_t txbufferindex)
{
	// 0 no pending
	// 1 pending
	return HAL_FDCAN_IsTxBufferMessagePending(&_hRes->handle, txbufferindex);

}

void FDCAN::MessageCallback(FDCAN_HandleTypeDef *hfdcan)
{

	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8];
	if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_BUFFER0, &RxHeader, RxData) != HAL_OK)
	{
		Error_Handler();
	}
	for (int i = 0; i < 8; i++)
		RX_test[i] = RxData[i];
}
void FDCAN1_IT0_IRQHandler(void)
{
	if (FDCAN::resFDCAN1)
		HAL_FDCAN_IRQHandler(&FDCAN::resFDCAN1->handle);
}

void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
	// clear the buffer I guess
	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8];
	uint32_t FifofillLevel = 0;

	FifofillLevel = HAL_FDCAN_GetRxFifoFillLevel(hfdcan, FDCAN_RX_FIFO0);

//	if((RxFifo0ITs & FDCAN_IT_RX_FIFO0_NEW_MESSAGE) != RESET)
//	{
//		/* Retreive Rx messages from RX FIFO0 */
//		if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &RxHeader, RxData) != HAL_OK)
//		{
//			/* Reception Error */
//			Error_Handler();
//		}
//
//
//		/* Display LEDx */
//		if ((RxHeader.Identifier == 0x321) && (RxHeader.IdType == FDCAN_STANDARD_ID) && (RxHeader.DataLength == FDCAN_DLC_BYTES_2))
//		{
//			//			LED_Display(RxData[0]);
//			//			ubKeyNumber = RxData[0];
//		}
//	}

	if (HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK)
	{
		/* Notification Error */
		Error_Handler();
	}
	//	}
}
void HAL_FDCAN_RxBufferNewMessageCallback(FDCAN_HandleTypeDef *hfdcan)
{
	//	// clear the buffer I guess
	//	FDCAN_RxHeaderTypeDef RxHeader;
	//	uint8_t RxData[8];
	//	/* Retreive Rx messages from RX FIFO0 */
	//	if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_BUFFER0, &RxHeader, RxData) != HAL_OK)
	//	{
	//		/* Reception Error */
	//		Error_Handler();
	//	}
	//
	//	/* Display LEDx */
	//	if ((RxHeader.Identifier == 0x321) && (RxHeader.IdType == FDCAN_STANDARD_ID) && (RxHeader.DataLength == FDCAN_DLC_BYTES_2))
	//	{
	//		//			LED_Display(RxData[0]);
	//		//			ubKeyNumber = RxData[0];
	//	}
	//
	//	if (HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK)
	//	{
	//		/* Notification Error */
	//		Error_Handler();
	//	}
	FDCAN::MessageCallback(hfdcan);
}

void HAL_FDCAN_TxFifoEmptyCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes)
{
	FDCAN::MessageCallback(hfdcan);
}
