/*
 * TestBench.cpp
 *
 *  Created on: Jul 2, 2020
 *      Author: tequilajohn
 */
/*
 * TestBench.cpp
 *
 *  Created on: Jul 2, 2020
 *      Author: tequilajohn
 */


#include "main.h"
//#include "cmsis_os.h"

#include "FDCAN.h"

void TestBench()
{
	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8] = {};
//	sfloat d = 1;
 	FDCAN fdcantest;
	uint8_t d0, d1,d2,d3,d4,d5,d6,d7;
	fdcantest.WriteDummyData(0x8);
	fdcantest.WriteDummyData(0x8);
	/* Activate remote node
	 * on nodeid 1
	 */
	uint8_t nodeid = 0x1;
	// Reset Node
	fdcantest.WriteMessage(0x00, 2, 0x81, nodeid, 0, 0, 0, 0, 0, 0);

	if (HAL_FDCAN_GetRxMessage(&fdcantest._hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData) != HAL_OK)
	{
		Error_Handler();
	}
	fdcantest.Read();
	// Switch to operational
	fdcantest.WriteMessage(0x00, 2, 0x01, nodeid, 0, 0, 0, 0, 0, 0);

	fdcantest.Read(&RxHeader, RxData);


	/* Read status of motor */
	uint8_t READ_REQUEST_CAN = 0x40;
	d0 = READ_REQUEST_CAN;
	uint8_t len = 8;
	uint16_t status_word = 0x6041;
	uint8_t low_byte_object_index = status_word & 0xFF;
	uint8_t high_byte_object_index = (status_word>>8) & 0xFF;
	d1 = low_byte_object_index;
	d2 = high_byte_object_index;
	d3 = 0x0;
	d4 = 0;
	d5 = 0;
	d6 = 0;
	d7 = 0;
	fdcantest.WriteMessage(0x601, len, d0,d1,d2,d3,d4,d5,d6,d7);


	/* Reset fault if any */
	uint16_t WRITE_REQUEST_CAN = 0x600;
	uint8_t CANWRITE_2BYTE = 0x2B;
	uint16_t control_index = 0x6040;
	low_byte_object_index = control_index & 0xFF;
	high_byte_object_index = (control_index>>8) & 0xFF;
	uint8_t subindex = 0x0;
	uint16_t datas = 0x06;

	uint32_t cobid = nodeid + WRITE_REQUEST_CAN;
	len = 8;

	d0 = CANWRITE_2BYTE;
	d1 = low_byte_object_index;
	d2 = high_byte_object_index;
	d3 = subindex;
	d4 = datas & 0xFF;
	d5 = (datas >> 8) & 0xFF;

	fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);
	/* Finished resetting fault */
	/* Exit fault */
	datas  = (uint16_t)0b10000110;
	subindex = 0;
    d1 = low_byte_object_index;
    d2 = high_byte_object_index;
    d4 = datas & 0xFF;
    d5 = (datas >> 8) & 0xFF;
    fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);

    /* Finished exiting fault */
	fdcantest.WriteMessage(cobid, len, 0x40, 0x41 ,0x60, 00, 00, 00, 00, 00);
	control_index = 0x6060;
	subindex = 0;
	datas = 2;
	low_byte_object_index = control_index & 0xFF;
	high_byte_object_index = (control_index>>8) & 0xFF;
    d1 = low_byte_object_index;
    d2 = high_byte_object_index;
    d4 = datas & 0xFF;
    d5 = (datas >> 8) & 0xFF;
    fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);

}
