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
#include "PD4Cxx08.h"
#include "CAN_CMD.h"
#include "NANOTEC_Bus.h"

void TestBench()
{
	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8] = {};
//	sfloat d = 1;
 	FDCAN fdcantest;
 	NANOTEC_CANOpen CANBustest(&fdcantest);
	uint8_t d0, d1,d2,d3,d4,d5,d6,d7;
	fdcantest.WriteDummyData(0x8);
	fdcantest.WriteDummyData(0x8);
	/* Activate remote node
	 * on nodeid 1
	 */
	uint8_t nodeid = 0x1;
	// Reset Node
//	fdcantest.WriteMessage(0x00, 2, 0x81, nodeid, 0, 0, 0, 0, 0, 0);
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_RESET_NODE, nodeid, 0, 0, 0, 0, 0, 0);

	volatile uint32_t FiffillLevel = 0;
	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	for (volatile uint8_t i =0; i< FiffillLevel; i++)
		fdcantest.Read();

	// Activate remote node
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_OPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);
	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	for (volatile uint8_t i =0; i< FiffillLevel; i++)
		fdcantest.Read();

	// Read status of motor
	Statusword_DataType current_status = 0x0;
    CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );

	// Select the velocity mode
	uint8_t subind = 0;
	Modesofoperation_DataType data = 0x02;
	CANBustest.writeRegister(nodeid, Modesofoperation, subind, data);
	// Write desired speed
	vltargetvelocity_DataType desvel = 0xC8;
	CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
	// Switch the power state machine to operation enabled
	Controlword_DataType controlword_data = 0x6;
	CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
	controlword_data = 0x7;
	CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
	controlword_data = 0xF;
	CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
	// Stop the motor
	controlword_data = 0x6;
	CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);

	// Select the velocity mode

	uint8_t lmodesofoperation = Modesofoperation & 0xFF;
	uint8_t hmodesofoperation = (Modesofoperation>>8) & 0xFF;
	subind = 0;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_1, lmodesofoperation,hmodesofoperation,
			subind,	data,0,0,0);

	// Write desired speed
	uint8_t lvlt = desvel & 0xFF;
	uint8_t hvlt = (desvel>>8) & 0xFF;
	uint8_t lvl = vltargetvelocity & 0xFF;
	uint8_t hvl = (vltargetvelocity>>8) & 0xFF;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_2, lvl,hvl,
			subind,	lvlt,hvlt,0,0);

	// Switch the power state machine to operation enabled
	 controlword_data = 0x6;
	uint8_t lctrl = Controlword & 0xFF;
	uint8_t hctrl = (Controlword>>8) & 0xFF;
	uint8_t lctrld = controlword_data & 0xFF;
	uint8_t hctrld = (controlword_data>>8) & 0xFF;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
			subind,	lctrld,hctrld,0,0);

	controlword_data = 0x7;
	lctrld = controlword_data & 0xFF;
	hctrld = (controlword_data>>8) & 0xFF;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
			subind,	lctrld,hctrld,0,0);

	controlword_data = 0xF;
	lctrld = controlword_data & 0xFF;
	hctrld = (controlword_data>>8) & 0xFF;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
			subind,	lctrld,hctrld,0,0);

	// Stop the motor
	controlword_data = 0x6;
	lctrld = controlword_data & 0xFF;
	hctrld = (controlword_data>>8) & 0xFF;
	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
			subind,	lctrld,hctrld,0,0);

	if (HAL_FDCAN_GetRxMessage(&fdcantest._hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData) != HAL_OK)
	{
		Error_Handler();
	}
	fdcantest.Read();
	// Switch to operational
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_OPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);

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
	uint32_t cobid = CAN_SDO_CANID_W + nodeid;
	fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5,d6,d7);

	/* Reset fault if any */
	uint16_t WRITE_REQUEST_CAN = 0x600;
	uint8_t CANWRITE_2BYTE = 0x2B;
	uint16_t control_index = 0x6040;
	low_byte_object_index = control_index & 0xFF;
	high_byte_object_index = (control_index>>8) & 0xFF;
	uint8_t subindex = 0x0;
	uint16_t datas = 0x06;

	cobid = nodeid + WRITE_REQUEST_CAN;
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
