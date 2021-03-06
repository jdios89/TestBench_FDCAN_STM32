/* Copyright (C) 2020-2020 Juan de Dios Flores Mendez. All rights reserved.
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
 * Web      :  https://github.com/jdios89
 * e-mail   :  juan.dios.flores@gmail.com
 * ------------------------------------------
 */

#ifndef PERIPHIRALS_FDCAN_H
#define PERIPHIRALS_FDCAN_H

#include "stm32h7xx_hal.h"
#include "cmsis_os.h" // for memory allocation (for the buffer) and callback

class FDCAN
{
public:
	typedef enum port_t
	{
		PORT_UNDEFINED = 0,
		PORT_FDCAN1
	} port_t;

public:
	static uint8_t RX_test[8];
	FDCAN(); // use the default FDCAN port defined in the IO map in STM32CubeMX
	~FDCAN();
	void InitPeripheral();
	void DeInitiPeripheral();
	void ConfigurePeripheral();

	void WriteDummyData(uint8_t data);
	void WriteMessage(uint32_t id, uint8_t len, uint8_t d0, uint8_t d1,
					  uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5,
					  uint8_t d6, uint8_t d7);
	void Read(FDCAN_RxHeaderTypeDef *pRxHeader, uint8_t *pRxData);
	uint32_t GetRxFiFoLevel();
	void ReadRequestFromRegister(uint8_t index, uint8_t subindex, uint8_t data);
	void WriteToRegister(uint8_t index, uint8_t subindex, uint8_t data);
	void Read(uint8_t index, uint8_t subindex, uint32_t *buffer);

	void Read();
	static void MessageCallback(FDCAN_HandleTypeDef *hfdcan);
	uint8_t Read(uint8_t index);
	uint32_t FiFoLatestTxRequest();
	uint32_t isPending(uint32_t txbufferindex);

public:
	typedef struct hardware_resource_t
	{
		port_t port;
		SemaphoreHandle_t resourceSemaphore;
		SemaphoreHandle_t transmissionFinished;
		bool configured;
		uint8_t instances; // how many objects are using this hardware resource
		FDCAN_HandleTypeDef handle;
	} hardware_resource_t;

	static hardware_resource_t * resFDCAN1;

private: //private
	FDCAN_TxHeaderTypeDef TxHeader;
	uint8_t TxData[8];
	int b;

public:
	hardware_resource_t *_hRes;

private:
//	GPIO_TypeDef * _fdcanPort;
	bool _waitingForReply;
};

#endif /* PERIPHIRALS_FDCAN_H_ */
