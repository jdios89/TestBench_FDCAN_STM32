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

#ifndef NANOTEC_BUS_H
#define NANOTEC_BUS_H

// #include "cmsis_os.h"
#include "FDCAN.h"
#include "PD4Cxx08.h"
#include "CAN_CMD.h"
//#include "stm32h7xx_hal.h"

class NANOTEC_CANOpen
{
public:
	NANOTEC_CANOpen(FDCAN *bus) : _bus(bus){};
	~NANOTEC_CANOpen(){};

	/* writes data depending on the data input */
	/* Write to 8 bit unsigned integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint8_t data);
	/* Write to 8 bit signed integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int8_t data);
	/* Write to 16 bit unsigned integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint16_t data);
	/* Write to 16 bit signed integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int16_t data);
	/* Write to 32 bit unsigned integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint32_t data);
	/* Write to 32 bit signed integer */
	bool writeRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int32_t data);

	/* Read request from register */
	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint8_t *data);

	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int8_t *data);

	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint16_t *data);

	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int16_t *data);

	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint32_t *data);

	void readRegister(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int32_t *data);

	void readRequest(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex);

	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint8_t * data);
	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int8_t * data);
	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint16_t * data);
	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int16_t * data);
	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, uint32_t * data);
	bool waitReply(uint8_t nodeid, uint16_t register_index,
			uint8_t subindex, int32_t * data);

private:
	FDCAN *_bus;
    uint8_t lowByte(uint16_t byte16);
    uint8_t highByte(uint16_t byte16);
    uint8_t lowByte(int16_t byte16);
    uint8_t highByte(int16_t byte16);
};

#endif
