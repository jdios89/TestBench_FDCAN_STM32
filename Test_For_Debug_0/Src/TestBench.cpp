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
//#include "PD4Cxx08.h"
//#include "CAN_CMD.h"
#include "NANOTEC_Bus.h"
#include "NANOTEC.h"

void TestBench()
{
	FDCAN_RxHeaderTypeDef RxHeader;
	uint8_t RxData[8] = {};
	FDCAN fdcantest; // port object
	NANOTEC_CANOpen CANBustest(&fdcantest); // port communication object
	// 	NANOTEC Motor(&fdcantest); // motor object
	NANOTEC(&fdcantest,
			(int8_t) 1 , 2.0f, 1000.0f, 1.0f, 4000.0, 30.0); // platform specific constructor

	uint8_t d0, d1,d2,d3,d4,d5,d6,d7;


	fdcantest.WriteMessage(0x601,8,0xAA,0xBB,0xCC,0xDD,0xEE,0xAA,0xBB,0xAA);HAL_Delay(1);


	fdcantest.WriteMessage(0x601,8,0xAA,0xBB,0xCC,0xDD,0xEE,0xAA,0xBB,0xAA);HAL_Delay(1);

	fdcantest.WriteMessage(0x601,8,0xAA,0xBB,0xCC,0xDD,0xEE,0xAA,0xBB,0xAA);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 1, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 2, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 3, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 4, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 5, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 6, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 7, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 8, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 9, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 0x10, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 0x11, 0, 0, 0, 0);HAL_Delay(1);
	fdcantest.WriteMessage(0x601, 8, 0x40, 0x41, 0x60, 0x12, 0, 0, 0, 0);HAL_Delay(1);

	fdcantest.WriteDummyData(0x8);
	HAL_Delay(1);
	//	while(1){}3

	fdcantest.WriteDummyData(0x8);
	HAL_Delay(1);
	/* Activate remote node
	 * on nodeid 1
	 */
	uint8_t nodeid = 0x1;
	// Reset Node
	//	fdcantest.WriteMessage(0x00, 2, 0x81, nodeid, 0, 0, 0, 0, 0, 0);
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_RESET_NODE, nodeid, 0, 0, 0, 0, 0, 0);
	CANBustest.waitForId(0x701, true, 10000);
	HAL_Delay(2500);
	volatile uint32_t FiffillLevel = 0;
	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	for (volatile uint8_t i =0; i< FiffillLevel; i++) fdcantest.Read();
	/* Clear the CANbus */
	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	for (volatile uint8_t i =0; i< FiffillLevel; i++) fdcantest.Read();
	// Activate remote node
	//	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_OPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);
	//	CANBustest.waitForId(0x701, true, 10000);
	//	HAL_Delay(3000); // Necessary to give some time to the motor to be ready to operate
	//	/* Clear the CAN bus */
	//	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	//	for (volatile uint8_t i =0; i< FiffillLevel; i++) fdcantest.Read();

	/* Deactivate PDOS */
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_PREOPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);
	CANBustest.waitForId(0x701, true, 10000);
	HAL_Delay(1000); // Necessary to give some time to the motor to be ready to operate

	uint8_t tries = 10;
	uint8_t tri_inc = 0; // count the attempts
	bool confirmation_done = false;

	TransmitPDO1CommunicationParameter_1_DataType data_ = 0x01 << 31; // set the bit 31 to 1 of communication parameter of TPDO
	uint16_t pdoid = 0x180;
	data_ += pdoid + nodeid; // complete the cobid data
	while( !confirmation_done && tri_inc < tries ){
		confirmation_done = CANBustest.writeRegister(nodeid, TransmitPDO1CommunicationParameter,
				TransmitPDO1CommunicationParameter_1, data_);
		tri_inc++;
		HAL_Delay(3);
	}
	HAL_Delay(1);

	tries = 10;
	tri_inc = 0;
	confirmation_done = false;
	TransmitPDO2CommunicationParameter_1_DataType data_2 = 0x01 << 31; // set the bit 31 to 1 of communication parameter of TPDO
	pdoid = 0x280;
	data_2 += pdoid + nodeid; // complete the cobid data
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, TransmitPDO2CommunicationParameter,
				TransmitPDO2CommunicationParameter_1, data_2);
		tri_inc++;
		HAL_Delay(3);
	}
	HAL_Delay(1);

	tries = 10;
	tri_inc = 0;
	confirmation_done = false;
	TransmitPDO3CommunicationParameter_1_DataType data_3 = 0x01 << 31; // set the bit 31 to 1 of communication parameter of TPDO
	pdoid = 0x380;
	data_3 += pdoid + nodeid; // complete the cobid data
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, TransmitPDO3CommunicationParameter,
				TransmitPDO3CommunicationParameter_1, data_3);
		tri_inc++;
		HAL_Delay(3);
	}
	HAL_Delay(1);

	tries = 10;
	tri_inc = 0;
	confirmation_done = false;
	TransmitPDO4CommunicationParameter_1_DataType data_4 = 0x01 << 31; // set the bit 31 to 1 of communication parameter of TPDO
	pdoid = 0x480;
	data_4 += pdoid + nodeid; // complete the cobid data
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, TransmitPDO4CommunicationParameter,
				TransmitPDO4CommunicationParameter_1, data_4);
		tri_inc++;
		HAL_Delay(3);
	}
	HAL_Delay(1);

	// Activate remote node
	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_OPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);
	CANBustest.waitForId(0x701, true, 10000);
	//	HAL_Delay(3000); // Necessary to give some time to the motor to be ready to operate
	/* Clear the CAN bus */
	FiffillLevel = HAL_FDCAN_GetRxFifoFillLevel(&fdcantest._hRes->handle, FDCAN_RX_FIFO0);
	for (volatile uint8_t i =0; i< FiffillLevel; i++) fdcantest.Read();
	HAL_Delay(1);

	// Read status of motor
	Statusword_DataType current_status = 0x0;
	tries = 5;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );
		if (confirmation_done) break;
		HAL_Delay(1);
		tri_inc++;
	}
	// Select the velocity mode
	HAL_Delay(1);

	uint8_t subind = 0;
	Modesofoperation_DataType data = 0x02;
	tries = 5;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, Modesofoperation, subind, data);
		if (confirmation_done) break;
		HAL_Delay(3);
		tri_inc++;
	}
	HAL_Delay(1);

	// Write desired speed
	vltargetvelocity_DataType desvel = 0xC8;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1);

	// Switch the power state machine to operation enabled
	Controlword_DataType controlword_data = 0x6;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	// Read the status word to confirm that the motor is ready to switch on
	HAL_Delay(1);

	uint8_t wait_for_statuschange = 5;
	uint8_t wfs_inc = 0;
	uint16_t mask_ready_to_switch_on = 0b0000000000100001;
	bool status_change = false;

	while (!status_change && wfs_inc < wait_for_statuschange)
	{
		current_status = 0x0;
		tries = 5;
		tri_inc = 0;
		confirmation_done = false;
		while( !confirmation_done && tri_inc < tries )
		{
			confirmation_done = CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );
			if (confirmation_done) break;
			HAL_Delay(2);
			tri_inc++;
		}

		if (confirmation_done)
		{ // check for the status
			uint16_t check = current_status & mask_ready_to_switch_on;
			if (check == mask_ready_to_switch_on)
			{
				status_change = true;
				break;
			}
		}
		wfs_inc++;
		HAL_Delay(2);
	}
	// TODO: If status not change check again
	HAL_Delay(1);

	controlword_data = 0x7;
	tries = 5;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1);

	wait_for_statuschange = 5;
	wfs_inc = 0;
	uint16_t mask_switched_on = 0b0000000000100011;
	status_change = false;

	while (!status_change && wfs_inc < wait_for_statuschange)
	{
		current_status = 0x0;
		tries = 5;
		tri_inc = 0;
		confirmation_done = false;
		while( !confirmation_done && tri_inc < tries )
		{
			confirmation_done = CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );
			if (confirmation_done) break;
			HAL_Delay(2);
			tri_inc++;
		}

		if (confirmation_done)
		{ // check for the status
			uint16_t check = current_status & mask_switched_on;
			if (check == mask_switched_on)
			{
				status_change = true;
				break;
			}
		}
		wfs_inc++;
		HAL_Delay(2);
	}
	HAL_Delay(1);

	controlword_data = 0xF;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1);

	wait_for_statuschange = 5;
	wfs_inc = 0;
	uint16_t mask_operation_enabled = 0b0000000000100111;
	status_change = false;

	while (!status_change && wfs_inc < wait_for_statuschange)
	{
		current_status = 0x0;
		tries = 5;
		tri_inc = 0;
		confirmation_done = false;
		while( !confirmation_done && tri_inc < tries )
		{
			confirmation_done = CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );
			if (confirmation_done) break;
			HAL_Delay(2);
			tri_inc++;
		}

		if (confirmation_done)
		{ // check for the status
			uint16_t check = current_status & mask_operation_enabled;
			if (check == mask_operation_enabled)
			{
				status_change = true;
				break;
			}
		}
		wfs_inc++;
		HAL_Delay(2);
	}
	HAL_Delay(1);

	current_status = 0x0;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.readRegister(nodeid, Statusword, 0x0, &current_status );
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(500);
	/* Profile velocities */
	// Write desired speed
	desvel = -50;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}

	HAL_Delay(500);
	/* Profile velocities */
	// Write desired speed
	desvel = 40;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}

	HAL_Delay(200);
	/* Profile velocities */
	// Write desired speed
	desvel = 300;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(700);
	/* Profile velocities */
	// Write desired speed
	desvel = -200;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}

	// Write desired speed
	desvel = 150;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1000);
	desvel = -150;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1000);
	desvel = 150;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1000);
	desvel = 150;
	tries = 3;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, vltargetvelocity, subind, desvel);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1000);

	/* Profile velocities end */

//	HAL_Delay(4000);
	// Stop the motor
	controlword_data = 0x6;
	tri_inc = 0;
	confirmation_done = false;
	while( !confirmation_done && tri_inc < tries )
	{
		confirmation_done = CANBustest.writeRegister(nodeid, Controlword, subind, controlword_data);
		if (confirmation_done) break;
		HAL_Delay(2);
		tri_inc++;
	}
	HAL_Delay(1);

	fdcantest.WriteDummyData(0x8);
	HAL_Delay(1);
	fdcantest.WriteDummyData(0x8);
	HAL_Delay(1);

	fdcantest.WriteDummyData(0x0);
	HAL_Delay(1);

	// Select the velocity mode
	//
	//	uint8_t lmodesofoperation = Modesofoperation & 0xFF;
	//	uint8_t hmodesofoperation = (Modesofoperation>>8) & 0xFF;
	//	subind = 0;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_1, lmodesofoperation,hmodesofoperation,
	//			subind,	data,0,0,0);
	//
	//	// Write desired speed
	//	uint8_t lvlt = desvel & 0xFF;
	//	uint8_t hvlt = (desvel>>8) & 0xFF;
	//	uint8_t lvl = vltargetvelocity & 0xFF;
	//	uint8_t hvl = (vltargetvelocity>>8) & 0xFF;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_2, lvl,hvl,
	//			subind,	lvlt,hvlt,0,0);
	//
	//	// Switch the power state machine to operation enabled
	//	 controlword_data = 0x6;
	//	uint8_t lctrl = Controlword & 0xFF;
	//	uint8_t hctrl = (Controlword>>8) & 0xFF;
	//	uint8_t lctrld = controlword_data & 0xFF;
	//	uint8_t hctrld = (controlword_data>>8) & 0xFF;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
	//			subind,	lctrld,hctrld,0,0);
	//
	//	controlword_data = 0x7;
	//	lctrld = controlword_data & 0xFF;
	//	hctrld = (controlword_data>>8) & 0xFF;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
	//			subind,	lctrld,hctrld,0,0);
	//
	//	controlword_data = 0xF;
	//	lctrld = controlword_data & 0xFF;
	//	hctrld = (controlword_data>>8) & 0xFF;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
	//			subind,	lctrld,hctrld,0,0);
	//
	//	// Stop the motor
	//	controlword_data = 0x6;
	//	lctrld = controlword_data & 0xFF;
	//	hctrld = (controlword_data>>8) & 0xFF;
	//	fdcantest.WriteMessage(CAN_SDO_CANID_W + nodeid, 8,
	//			CAN_SDOW_DATA_BYTE_2, lctrl,hctrl,
	//			subind,	lctrld,hctrld,0,0);
	//
	//	if (HAL_FDCAN_GetRxMessage(&fdcantest._hRes->handle, FDCAN_RX_FIFO0, &RxHeader, RxData) != HAL_OK)
	//	{
	//		Error_Handler();
	//	}
	//	fdcantest.Read();
	//	// Switch to operational
	//	fdcantest.WriteMessage(CAN_NMT, 2, CAN_SWITCH_TO_OPERATIONAL, nodeid, 0, 0, 0, 0, 0, 0);
	//
	//	fdcantest.Read(&RxHeader, RxData);
	//
	//	/* Read status of motor */
	//	uint8_t READ_REQUEST_CAN = 0x40;
	//	d0 = READ_REQUEST_CAN;
	//	uint8_t len = 8;
	//	uint16_t status_word = 0x6041;
	//	uint8_t low_byte_object_index = status_word & 0xFF;
	//	uint8_t high_byte_object_index = (status_word>>8) & 0xFF;
	//	d1 = low_byte_object_index;
	//	d2 = high_byte_object_index;
	//	d3 = 0x0;
	//	d4 = 0;
	//	d5 = 0;
	//	d6 = 0;
	//	d7 = 0;
	//	uint32_t cobid = CAN_SDO_CANID_W + nodeid;
	//	fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5,d6,d7);
	//
	//	/* Reset fault if any */
	//	uint16_t WRITE_REQUEST_CAN = 0x600;
	//	uint8_t CANWRITE_2BYTE = 0x2B;
	//	uint16_t control_index = 0x6040;
	//	low_byte_object_index = control_index & 0xFF;
	//	high_byte_object_index = (control_index>>8) & 0xFF;
	//	uint8_t subindex = 0x0;
	//	uint16_t datas = 0x06;
	//
	//	cobid = nodeid + WRITE_REQUEST_CAN;
	//	len = 8;
	//
	//	d0 = CANWRITE_2BYTE;
	//	d1 = low_byte_object_index;
	//	d2 = high_byte_object_index;
	//	d3 = subindex;
	//	d4 = datas & 0xFF;
	//	d5 = (datas >> 8) & 0xFF;
	//
	//	fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);
	//	/* Finished resetting fault */
	//	/* Exit fault */
	//	datas  = (uint16_t)0b10000110;
	//	subindex = 0;
	//    d1 = low_byte_object_index;
	//    d2 = high_byte_object_index;
	//    d4 = datas & 0xFF;
	//    d5 = (datas >> 8) & 0xFF;
	//    fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);
	//
	//    /* Finished exiting fault */
	//	fdcantest.WriteMessage(cobid, len, 0x40, 0x41 ,0x60, 00, 00, 00, 00, 00);
	//	control_index = 0x6060;
	//	subindex = 0;
	//	datas = 2;
	//	low_byte_object_index = control_index & 0xFF;
	//	high_byte_object_index = (control_index>>8) & 0xFF;
	//    d1 = low_byte_object_index;
	//    d2 = high_byte_object_index;
	//    d4 = datas & 0xFF;
	//    d5 = (datas >> 8) & 0xFF;
	//    fdcantest.WriteMessage(cobid, len, d0,d1,d2,d3,d4,d5, 0, 0);
}
