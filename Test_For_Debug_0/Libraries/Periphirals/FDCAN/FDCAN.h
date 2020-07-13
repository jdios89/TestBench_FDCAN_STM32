/*
 * FDCAN.h
 *
 *  Created on: Jul 2, 2020
 *      Author: tequilajohn
 */

#ifndef PERIPHIRALS_FDCAN_H
#define PERIPHIRALS_FDCAN_H

/* FDCAN port will be hard coded*/
#include "stm32h7xx_hal.h"
//#include "cmsis_os.h" // for memory allocation (for the buffer) and callback

class FDCAN
{
	public:
		typedef enum port_t {
			PORT_UNDEFINED = 0,
			PORT_FDCAN1
		} port_t;
	public:
		int a;
		FDCAN(); // use the default FDCAN port defined in the IO map in STM32CubeMX
		~FDCAN();
		void InitPeripheral();
		void DeInitiPeripheral();
		void ConfigurePeripheral();

		void WriteDummyData(uint8_t data);
		void WriteMessage(uint32_t  id, uint8_t len, uint8_t d0, uint8_t d1,
				          uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5,
						  uint8_t d6, uint8_t d7);
		void ReadRequestFromRegister(uint8_t index, uint8_t subindex, uint8_t data);
		void WriteToRegister(uint8_t index, uint8_t subindex, uint8_t data);
	    void Read(uint8_t index, uint8_t subindex, uint32_t * buffer);
		uint8_t Read(uint8_t index);
	public:
		typedef struct hardware_resource_t {
			port_t port;
			bool configured;
			uint8_t instances; // how many objects are using this hardware resource
			FDCAN_HandleTypeDef handle;
		} hardware_resource_t;

		static hardware_resource_t * resFDCAN1;

		private: //private
			FDCAN_TxHeaderTypeDef TxHeader;
			uint8_t TxData[8];
			int b;
			hardware_resource_t * _hRes;
			GPIO_TypeDef * _fdcanPort;
			bool _waitingForReply;

};



#endif /* PERIPHIRALS_FDCAN_H_ */
