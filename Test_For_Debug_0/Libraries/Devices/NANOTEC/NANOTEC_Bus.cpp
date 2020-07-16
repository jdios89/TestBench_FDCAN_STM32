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
//#include "stm32h7xx_hal.h"

/* Auxiliary function */
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
    return true;
}
/* Write to 8 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int8_t data)
{
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
    return true;
}
/* Write to 16 bit unsigned integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, uint16_t data)
{
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
    return true;
}
/* Write to 16 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int16_t data)
{
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
    return true;
}
/* Write to 32 bit unsigned integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, uint32_t data)
{
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_2;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = (data >> 16) & 0xFF;
    uint8_t d7 = (data >> 24) & 0xFF; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    return true;
}
/* Write to 32 bit signed integer */
bool NANOTEC_CANOpen::writeRegister(uint8_t nodeid, uint16_t register_index,
                                    uint8_t subindex, int32_t data)
{
    uint32_t id = nodeid + CAN_SDO_CANID_W;
    uint8_t len = 8;
    uint8_t d0 = CAN_SDOW_DATA_BYTE_2;
    uint8_t d1 = lowByte(register_index); //register number for 4 bytes
    uint8_t d2 = highByte(register_index);
    uint8_t d3 = subindex;
    uint8_t d4 = data & 0xFF;
    uint8_t d5 = (data >> 8) & 0xFF;
    uint8_t d6 = (data >> 16) & 0xFF;
    uint8_t d7 = (data >> 24) & 0xFF; //MSB , little endian format
    _bus->WriteMessage(id, len, d0, d1, d2, d3, d4, d5, d6, d7);
    return true;
}

/* Read request from register */
void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
                                   uint8_t subindex, uint8_t *data)
{
    readRequest(nodeid, register_index, subindex);
    // delayMicroseconds(300);
    bool replied = false;
    FDCAN_RxHeaderTypeDef RxHeader;
    uint8_t RxData[8];
    uint32_t messagesReceived = _bus->GetRxFiFoLevel();
    uint32_t cobid_r = nodeid + CAN_SDO_CANID_R;
    while (!replied /*|| !(micros() - _timetotimeout > _timeout)*/)
    {
        messagesReceived = _bus->GetRxFiFoLevel();
        if (messagesReceived > 0)
        {
            _bus->Read(&RxHeader, RxData);
            uint16_t register_response = (RxData[2]<<8) && RxData[1];
            if (RxHeader.Identifier == cobid_r && RxData[0] != CAN_ERROR_RESPONSE
                && register_response == register_index && RxData[3] == subindex)
            {
                *data = RxData[4];
                replied = true; 
            }
        }
    }

}
//
//void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
//                                   uint8_t subindex, int8_t *data);
//
//void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
//                                   uint8_t subindex, uint16_t *data);
//
//void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
//                                   uint8_t subindex, int16_t *data);
//
//void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
//                                   uint8_t subindex, uint32_t *data);
//
//void NANOTEC_CANOpen::readRegister(uint8_t nodeid, uint16_t register_index,
//                                   uint8_t subindex, int32_t *data);

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
