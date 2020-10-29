/* Copyright (C) 2019-2020 Juan de Dios Flores Mendez. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the MIT License
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the MIT License for further details.
 *
 * Contact information
 * ------------------------------------------
 * Juan de Dios Flores Mendez
 * e-mail   :  juan.dios.flores@gmail.com
 * ------------------------------------------
 */

#include "NANOTEC_Bus.h"
#include "FDCAN.h" //FDCAN Library
#include "stm32h7xx_hal.h"

void delay(uint32_t time_ms) {
	osDelay (time_ms);
//	HAL_Delay(time_ms*1000);
}


/* Auxiliary functions */
uint8_t NANOTEC_CANOpen::lowByte(uint16_t byte16)
{
    return (uint8_t)(byte16 & 0xFF);
}
uint8_t NANOTEC_CANOpen::highByte(uint16_t byte16)
{
    return (uint8_t)((byte16 >> 8) & 0xFF);
}
uint8_t NANOTEC_CANOpen::lowByte(int16_t byte16)
{
    return (uint8_t)(byte16 & 0xFF);
}

uint8_t NANOTEC_CANOpen::highByte(int16_t byte16)
{
    return (uint8_t)((byte16 >> 8) & 0xFF);
}

/* writes data to register and check the reply */

bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, uint8_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_1;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data;
    uint8_t d5 = 0x0;
    uint8_t d6 = 0x0;
    uint8_t d7 = 0x0; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}
/* Write to 8 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int8_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_1;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data;
    uint8_t d5 = 0x0;
    uint8_t d6 = 0x0;
    uint8_t d7 = 0x0; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}
/* Write to 16 bit unsigned integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, uint16_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_2;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = 0x0;
    uint8_t d7 = 0x0; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}
/* Write to 16 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int16_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_2;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = 0x0;
    uint8_t d7 = 0x0; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}
/* Write to 32 bit unsigned integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, uint32_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_4;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = (data >> 16) & 0xFF;
    uint8_t d7 = (data >> 24) & 0xFF; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}
/* Write to 32 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int32_t data)
{
    bool write_confirmed = false;
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_4;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = (data >> 16) & 0xFF;
    uint8_t d7 = (data >> 24) & 0xFF; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    // Wait for a reply, set timeout of 2 ms
    // HAL_delay(1);
    uint32_t timeout = 3;
    /* wait for reply */
    write_confirmed = waitReply(nodeid, register_index, subindex, timeout);
    return write_confirmed;
}

/* Read request from register */
bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, uint8_t *data)
{
    readRequest(nodeid, register_index, subindex);
    uint32_t timeout = 2; // 2 ms timeout
    volatile bool read_confirmed = false;
    read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
    return read_confirmed;
    // delayMicroseconds(300);
    /*
    bool replied = false;
    FDCAN_RxHeaderTypeDef RxHeader;
    uint8_t RxData[8];
    uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    while (!replied )
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            uint16_t register_response = (RxData[2] << 8) && RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                *data = RxData[4];
                replied = true;
            }
        }
    }
    */
}

bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, int8_t *data)
{
	readRequest(nodeid, register_index, subindex);
	uint32_t timeout = 2; // 2 ms timeout
	volatile bool read_confirmed = false;
	read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
	return read_confirmed;
}

bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, uint16_t *data)
{
    readRequest(nodeid, register_index, subindex);
    volatile uint32_t fifobufferlocation = _bus->FiFoLatestTxRequest();
    // check if the transaction is pending
    volatile uint32_t isPending = _bus->isPending(fifobufferlocation);

    uint32_t timeout = 2; // 2 ms timeout
    bool read_confirmed = false;
    read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
    return read_confirmed;
    // delayMicroseconds(300);
    /*
    bool replied = false;
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;

    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    while (!replied )
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                *data = (RxData[5] << 8) + RxData[4];
                replied = true;
            }
        }
    }
    */
}

bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, int16_t *data)
{
    readRequest(nodeid, register_index, subindex);
    uint32_t timeout = 2; // 2 ms timeout
    bool read_confirmed = false;
    read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
    return read_confirmed;
}

bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, uint32_t *data)
{
    readRequest(nodeid, register_index, subindex);
    uint32_t timeout = 2; // 2 ms timeout
    bool read_confirmed = false;
    read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
    return read_confirmed;
}

bool NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, int32_t *data)
{
    readRequest(nodeid, register_index, subindex);
    uint32_t timeout = 2; // 2 ms timeout
    bool read_confirmed = false;
    read_confirmed = waitReply(nodeid, register_index, subindex, timeout, data);
    return read_confirmed;
}

void NANOTEC_CANOpen::readRequest(uint8_t nodeid, uint16_t register_index,
                                  uint8_t subindex)
{
    uint32_t comobject_id = CAN_SDO_CANID_W; // This is the R_SDO object id
    uint32_t id = nodeid + comobject_id;
    uint8_t len = 8;
    uint8_t d0 = CAN_READ_REQUEST; //read request
    uint8_t d1 = lowByte(register_index);
    uint8_t d2 = highByte(register_index); //reguister 2012h in little endian
    uint8_t d3 = subindex;                 //subindex
    uint8_t d4 = 0;                        //filling message
    uint8_t d5 = 0;
    uint8_t d6 = 0;
    uint8_t d7 = 0;
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
}

bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout)
{
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}
bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, uint8_t *data)
{
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                *data = RxData[4];
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}

bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, int8_t *data)
{
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                //TODO: Confirm data size
                *data = RxData[4];
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}
bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, uint16_t *data)
{
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                //TODO: Confirm data size
                *data = (RxData[5] << 8) + RxData[4];
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}
bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, int16_t *data)
{
    union {
        int16_t mInt16;           // 4 bytes
        uint8_t mInt16InBytes[2]; //  mapped onto the same storage as myuInt16
    } UnionInt16;
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                //TODO: Confirm data size
                for (int i = 0; i < 2; i++)
                    UnionInt16.mInt16InBytes[i] = RxData[i + 4];
                *data = UnionInt16.mInt16;
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}
bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, uint32_t *data)
{
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                //TODO: Confirm data size
                *data = (RxData[7] << 24) + (RxData[6] << 16) + (RxData[5] << 8) + RxData[4];
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}
bool NANOTEC_CANOpen::waitReply(uint8_t nodeid, uint16_t register_index,
                                uint8_t subindex, uint32_t timeout, int32_t *data)
{
    union {
        int32_t mInt32;           // 4 bytes
        uint8_t mInt32InBytes[2]; //  mapped onto the same storage as myuInt16
    } UnionInt32;
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];
    volatile uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    volatile uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    volatile uint32_t chrono = 0;
    while (!replied && chrono < timeout)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            for (int i = 0; i < 8; i++)
                vRxData[i] = RxData[i];
            vRxHeader.Identifier = RxHeader.Identifier;
            volatile uint16_t register_response = (RxData[2] << 8) + RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE && register_response == register_index && RxData[3] == subindex)
            {
                //TODO: Confirm data size
                for (int i = 0; i < 4; i++)
                    UnionInt32.mInt32InBytes[i] = RxData[i + 4];
                *data = UnionInt32.mInt32;
                replied = true;
                break;
            }
        }
        delay(1);
        chrono++;
    }
    return replied;
}

bool NANOTEC_CANOpen::waitForId(uint16_t id, bool setTimeout, uint32_t timeout)
{
    uint32_t chrono = 0;
    FDCAN_RxHeaderTypeDef RxHeader;
    volatile FDCAN_RxHeaderTypeDef vRxHeader;
    bool replied = false;
    volatile uint32_t messagesReceived = 0;
    uint8_t RxData[8];
    volatile uint8_t vRxData[8];

    while(!replied && chrono < timeout)
    {
    	messagesReceived = _bus->GetRxFiFoLevel();
    	if (messagesReceived > 0)
    	{
    		_bus->Read(&RxHeader, RxData);
    		for (int i = 0; i < 8; i++)
    			vRxData[i] = RxData[i];
    		vRxHeader.Identifier = RxHeader.Identifier;
    		if (RxHeader.Identifier == id)
    		{
    		    		replied = true;
    		    		break;
    	   	}
    	}

    	if (setTimeout) chrono++; // increase only if the timeout is set
    	delay(1);
    }
    return replied;
}

// union {
//     int32_t myInt32;        // 4 bytes
//     byte myInt32InBytes[4]; //  mapped onto the same storage as myInt32
// } myUnion;
// union {
//     int32_t myInt32;        // 4 bytes
//     byte myInt32InBytes[4]; //  mapped onto the same storage as myInt32
// } myUnion2;
// union {
//     uint32_t myuInt32;       // 4 bytes
//     byte myuInt32InBytes[4]; //  mapped onto the same storage as myInt32
// } myUnion3;

// union {
//     uint16_t myuInt16;       // 4 bytes
//     byte myuInt16InBytes[2]; //  mapped onto the same storage as myuInt16
// } myUnion16;
