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

#include "MainTask.h"
#include "stm32h7xx_hal.h"
#include "cmsis_os.h"
#include "main.h"
//#include "MemoryManagement.h"
#include "FDCAN.h" // Periphirial library
#include "Timer.h"
//#include "PD4Cxx08.h"
//#include "CAN_CMD.h"
#include "NANOTEC_Bus.h" // Communication library
#include "NANOTEC.h" // Motor specific library

int32_t encoder1 = 0;
int32_t encoder2 = 0;
int32_t encoder3 = 0;

void testTask()
{
	FDCAN * fdcantest22 = new FDCAN(); // port object
}
void MainTask(void * pvParameters)
{
//	/* Use this task to:
//	 * - Create objects for each module
//	 *     (OBS! It is very important that objects created with "new"
//	 *      only happens within a thread due to the usage of the FreeRTOS managed heap)
//	 * - Link any modules together if necessary
//	 * - Create message exchange queues and/or semaphore
//	 * - (Create) and start threads related to modules
//	 *
//	 * Basically anything related to starting the system should happen in this thread and NOT in the main() function !!!
//	 */
//
//	/* Initialize global parameters */
//	Parameters& params = *(new Parameters);
//
//	/* Initialize power management */
//	IO * enable19V = new IO(GPIOE, GPIO_PIN_4); // configure as output
//	IO * enable5V = new IO(GPIOC, GPIO_PIN_3); // configure as output
//	Battery * battery1 = new Battery();
//	Battery * battery2 = new Battery();
//	PWM * powerLED = new PWM(PWM::TIMER17, PWM::CH1, POWER_LED_PWM_FREQUENCY, POWER_LED_PWM_RANGE);
//	PowerManagement * pm = new PowerManagement(*enable19V, *enable5V, *battery1, *battery2, *powerLED, POWER_MANAGEMENT_PRIORITY);
//
//	/* Initialize EEPROM */
//	EEPROM * eeprom = new EEPROM;
//	eeprom->EnableSection(eeprom->sections.imu_calibration, sizeof(IMU::calibration_t)); // enable IMU calibration section in EEPROM
//	eeprom->EnableSection(eeprom->sections.parameters, params.getParameterSizeBytes());
//	eeprom->Initialize();
//	params.AttachEEPROM(eeprom); // attach EEPROM to load and store parameters into EEPROM
//
//	/* Initialize MATLAB coder globals */
//	MATLABCoder_initialize();
//
//	/* Initialize communication */
//	USBCDC * usb = new USBCDC(USBCDC_TRANSMITTER_PRIORITY);
//	LSPC * lspcUSB = new LSPC(usb, LSPC_RECEIVER_PRIORITY, LSPC_TRANSMITTER_PRIORITY); // very important to use "new", otherwise the object gets placed on the stack which does not have enough memory!
//	Debug * dbg = new Debug(lspcUSB); // pair debug module with configured LSPC module to enable "Debug::print" functionality
//	params.AttachLSPC(lspcUSB); // attach USB object to allow modification of parameters over USB
//
//	/* Register general (system wide) LSPC callbacks */
//	lspcUSB->registerCallback(lspc::MessageTypesFromPC::Reboot, &Reboot_Callback);
//	lspcUSB->registerCallback(lspc::MessageTypesFromPC::EnterBootloader, &EnterBootloader_Callback);
//
//	/* Debug boot info */
//	Debug::print("Booting...\n");
//
//	/* Initialize front panel periphirals (eg. quadrature knob, LCD and buttons */
//	IO * powerButton = new IO(GPIOB, GPIO_PIN_6, IO::PULL_DOWN); // configure as input
//	IO * resetButton = new IO(GPIOD, GPIO_PIN_15, IO::PULL_DOWN); // configure as input
//	IO * calibrateButton = new IO(GPIOD, GPIO_PIN_14, IO::PULL_DOWN); // configure as input
//
//	/* Prepare Xsens IMU always, since it is used for logging and comparison purposes */
//	UART * uart = new UART(UART::PORT_UART3, 460800, 500);
//	MTI200 * mti200 = new MTI200(uart);
//	while (1) {
//		HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_1);
//		osDelay(500);
//	}
//	while (1) {
//		HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_1);
//		osDelay(500);
//	}
	float d = 2;
	FDCAN fdcantest2; // port object
	FDCAN * fdcantest = new FDCAN(); // port object
	while (1) {
		HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_1);
		osDelay(500);
	}


//	FDCAN * fdcantest = new FDCAN(); // port object
//	FDCAN fdcantest; // port object

//	NANOTEC_CANOpen CANBustest(fdcantest); // port communication object
// NANOTEC(can_object, motor_id, max_current, current_constant Nm/A, Gear ratio, TicksperRev, MaxMotorSpeed)
//	NANOTEC NANOTEC_1(fdcantest,
//			(uint8_t) 0x1 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0); // platform specific constructor
//	NANOTEC_1.Configure();
	NANOTEC * motor1 = new NANOTEC(fdcantest,(uint8_t) 0x1 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0);
	NANOTEC * motor2 = new NANOTEC(fdcantest,(uint8_t) 0x2 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0);
	NANOTEC * motor3 = new NANOTEC(fdcantest,(uint8_t) 0x3 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0);

	/* For now configure the motors after creation */
	motor1->Configure();
	motor2->Configure();
	motor3->Configure();

	/* Initialize microseconds timer */
	Timer * microsTimer = new Timer(Timer::TIMER6, 1000000); // create a 1 MHz counting timer used for micros() timing

	/* Control variables */
	TickType_t xLastWakeTime;
	uint32_t prevTimerValue; // used for measuring dt
	float timestamp, dt_compute, dt_compute2;
	float SampleRate = 200;

	/* Controller loop time / sample rate */
	TickType_t loopWaitTicks = configTICK_RATE_HZ / SampleRate;
	/* Main control loop */
	xLastWakeTime = xTaskGetTickCount();
	prevTimerValue = microsTimer->Get();
	float pos[3] = {0.0f, 0.0f, 0.0f};
	float pos_d[3] = {0.0f, 0.0f, 0.0f};
	float pos_l[3] = {0.0f, 0.0f, 0.0f};
	float error_pos[3] = {0.0f, 0.0f, 0.0f};
	float error_pos_l[3] = {0.0f, 0.0f, 0.0f};
	float output[3] = {0.0f, 0.0f, 0.0f};
	float kp_c[3] = {0.0f, 0.0f, 0.0f};
	float kd_c[3] = {0.0f, 0.0f, 0.0f};
	float ki_c[3] = {0.0f, 0.0f, 0.0f};
    float kp = 0.1;
    float kd = 0.2;
    float ki = 0.1;
    float dt = 0.004;
	// Compute control
	while (true) {
		osDelay(3);
		/* Wait until time has been reached to make control loop periodic */
//		vTaskDelayUntil(&xLastWakeTime, loopWaitTicks);
		// Reference generator
		float amplitude[3] = { 3.5, 1.0, 1.6 };
		float freq[3] = { 0.23, 0.5, 1.0 };
		for (int i = 0; i < 3; i++) {
			float PI = 3.14159265;
			float time_ms_ = (float) HAL_GetTick(); //uint32_t
			pos_d[i] = amplitude[i]
					* sinf(2.0f * PI * freq[i] * time_ms_ / 1000.0f);
		}
		// Control computation
		for (int i = 0; i < 3; i++) {
			pos_l[i] = pos[i];
			switch (i) {
			case 0:
				pos[i] = motor1->GetAngle();
				break;
			case 1:
				pos[i] = motor2->GetAngle();
				break;
			case 2:
				pos[i] = motor3->GetAngle();
				break;
			}
//			uint32_t timerPrev = HAL_tic();
			float dt = microsTimer->GetDeltaTime(prevTimerValue);
			prevTimerValue = microsTimer->Get();
			timestamp = microsTimer->GetTime();
//			pos[i] = NANOTECS[i].GetAngle();
			error_pos_l[i] = error_pos[i];
			error_pos[i] = pos_d[i] - pos[i];
			kp_c[i] = kp * error_pos[i];
			kd_c[i] = kd * (error_pos[i] - error_pos_l[i]);
			ki_c[i] = 0;
			output[i] = kp_c[i] + kd_c[i] + ki_c[i];
//			NANOTECS[i].SetTorque(output[i]);
			switch (i) {
			case 0:
				motor1->SetTorque(output[i]);
				break;
			case 1:
				motor2->SetTorque(output[i]);
				break;
			case 2:
				motor3->SetTorque(output[i]);
				break;
			}
		}
		//float time_ms = dt * 1000.0;
		//HAL_Delay(int(time_ms));
	}
	//	NANOTEC * NANOTECS[3] =  {new NANOTEC(&fdcantest,(uint8_t) 0x1 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0),
	//	    		              new NANOTEC(&fdcantest,(uint8_t) 0x2 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0),
	//				              new NANOTEC(&fdcantest,(uint8_t) 0x3 , 2.0f, 3.54f/4.2f, 1.0f, 10000.0, 30.0)};



//	if (params.estimator.ConfigureXsensIMUatBoot) {
//		if (!mti200->Configure(2*params.estimator.SampleRate)) { // configuration failed, so do not use/pass on to balance controller
//			delete(mti200);
//			mti200 = 0;
//		}
//	}
//
//	/* Initialize and configure IMU */
//	IMU * imu = 0;
//	if (params.estimator.UseXsensIMU) {
//		if (!mti200)
//			ERROR("MTI200 selected but not available!");
//		imu = mti200; // use Xsens MTI200 in Balance controller
//		imu->AttachEEPROM(eeprom);
//	}
//	else {
//		// Prepare and configure MPU9250 IMU
//		SPI * spi = new SPI(SPI::PORT_SPI6, MPU9250_Bus::SPI_LOW_FREQUENCY, GPIOG, GPIO_PIN_8);
//		MPU9250 * mpu9250 = new MPU9250(spi);
//		if (mpu9250->Configure(MPU9250::ACCEL_RANGE_4G, MPU9250::GYRO_RANGE_2000DPS) != 0)
//			ERROR("MPU9250 selected but not available!");
//
//		if (params.estimator.EnableSensorLPFfilters) {
//			//mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_92HZ, MPU9250::DLPF_BANDWIDTH_92HZ); // sensor bandwidths should be lower than half the sample rate to avoid aliasing problems
//			mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_92HZ, MPU9250::DLPF_BANDWIDTH_250HZ); // however best results are seen with 250 Hz gyro bandwidth, even though we sample at 200 Hz
//		} else {
//			mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_OFF, MPU9250::DLPF_BANDWIDTH_OFF);
//			//mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_184HZ, MPU9250::DLPF_BANDWIDTH_184HZ);
//			//mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_41HZ, MPU9250::DLPF_BANDWIDTH_41HZ);
//			//mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_20HZ, MPU9250::DLPF_BANDWIDTH_20HZ);
//			//mpu9250->setFilt(MPU9250::DLPF_BANDWIDTH_OFF, MPU9250::DLPF_BANDWIDTH_184HZ);
//		}
//		mpu9250->ConfigureInterrupt(GPIOE, GPIO_PIN_3);
//		imu = mpu9250; // use MPU9250 in Balance controller
//		imu->AttachEEPROM(eeprom);
//	}
//	if (!imu->isCalibrated()) {
//		imu->SetCalibration(params.sensor.default_accelerometer_bias, params.sensor.default_accelerometer_scale, params.sensor.default_gyroscope_bias, params.sensor.default_calibration_matrix);
//	}
//
//	/* Initialize microseconds timer */
//	Timer * microsTimer = new Timer(Timer::TIMER6, 1000000); // create a 1 MHz counting timer used for micros() timing
//
//	/* Initialize motors */
//	ESCON * motor1 = new ESCON(1, params.model.MotorMaxCurrent, params.model.MotorTorqueConstant, params.model.i_gear, params.model.EncoderTicksPrRev, params.model.MotorMaxSpeed);
//	ESCON * motor2 = new ESCON(2, params.model.MotorMaxCurrent, params.model.MotorTorqueConstant, params.model.i_gear, params.model.EncoderTicksPrRev, params.model.MotorMaxSpeed);
//	ESCON * motor3 = new ESCON(3, params.model.MotorMaxCurrent, params.model.MotorTorqueConstant, params.model.i_gear, params.model.EncoderTicksPrRev, params.model.MotorMaxSpeed);
//
//	/******* APPLICATION LAYERS *******/
//	BalanceController * balanceController = new BalanceController(*imu, *motor1, *motor2, *motor3, *lspcUSB, *microsTimer, mti200);
//	///***
//	/* Create setpoint semaphores */
//		BalanceReference.semaphore = xSemaphoreCreateBinary();
//		if (BalanceReference.semaphore == NULL) {
//			ERROR("Could not create Quaternion reference semaphore");
//			return;
//		}
//		vQueueAddToRegistry(BalanceReference.semaphore, "Quaternion reference");
//		xSemaphoreGive( BalanceReference.semaphore ); // give the semaphore the first time
//
//		VelocityReference.semaphore = xSemaphoreCreateBinary();
//		if (VelocityReference.semaphore == NULL) {
//			ERROR("Could not create Velocity reference semaphore");
//			return;
//		}
//		vQueueAddToRegistry(VelocityReference.semaphore, "Velocity reference");
//		xSemaphoreGive( VelocityReference.semaphore ); // give the semaphore the first time
//
//		/* Register message type callbacks */
//		com.registerCallback(lspc::MessageTypesFromPC::CalibrateIMU, &CalibrateIMUCallback, (void *)this);
//		com.registerCallback(lspc::MessageTypesFromPC::RestartController, &RestartControllerCallback, (void *)this);
//		com.registerCallback(lspc::MessageTypesFromPC::QuaternionReference, &QuaternionReference_Callback, (void *)this);
//		com.registerCallback(lspc::MessageTypesFromPC::AngularVelocityReference, &AngularVelocityReference_Callback, (void *)this);
//		com.registerCallback(lspc::MessageTypesFromPC::BalanceControllerReference, &BalanceControllerReference_Callback, (void *)this);
//		com.registerCallback(lspc::MessageTypesFromPC::VelocityReference, &VelocityReference_Callback, (void *)this);
//
//		Start();
//		///***
//		int BalanceController::Start()
//		{
//			if (isRunning_) return 0; // task already running
//			shouldStop_ = false;
//			return xTaskCreate( BalanceController::Thread, (char *)"Balance Controller", THREAD_STACK_SIZE, (void*) this, THREAD_PRIORITY, &TaskHandle_);
//		}
//
//	if (!balanceController) ERROR("Could not initialize balance controller");
//
//	FrontPanel * frontPanel = new FrontPanel(*pm, *balanceController, powerButton, resetButton, calibrateButton);
//	if (!frontPanel) ERROR("Could not initialize front panel");
//
//
//	/* Send CPU load every second */
//	char * pcWriteBuffer = (char *)pvPortMalloc(1024);
//	while (1)
//	{
//		vTaskGetRunTimeStats(pcWriteBuffer);
//		char * endPtr = &pcWriteBuffer[strlen(pcWriteBuffer)];
//		*endPtr++ = '\n'; *endPtr++ = '\n'; *endPtr++ = 0;
//
//		// Split into multiple packages and send
//		uint16_t txIdx = 0;
//		uint16_t remainingLength = strlen(pcWriteBuffer);
//		uint16_t txLength;
//
//		while (remainingLength > 0) {
//			txLength = remainingLength;
//			if (txLength > LSPC_MAXIMUM_PACKAGE_LENGTH) {
//				txLength = LSPC_MAXIMUM_PACKAGE_LENGTH-1;
//				while (pcWriteBuffer[txIdx+txLength] != '\n' && txLength > 0) txLength--; // find and include line-break (if possible)
//				if (txLength == 0) txLength = LSPC_MAXIMUM_PACKAGE_LENGTH;
//				else txLength++;
//			}
//			lspcUSB->TransmitAsync(lspc::MessageTypesToPC::CPUload, (uint8_t *)&pcWriteBuffer[txIdx], txLength);
//
//			txIdx += txLength;
//			remainingLength -= txLength;
//		}
//		osDelay(1000);
//	}
//
//	/*while (1)
//	{
//		vTaskSuspend(NULL); // suspend this task
//	}*/
}

//void Reboot_Callback(void * param, const std::vector<uint8_t>& payload)
//{
//	// ToDo: Need to check for magic key
//	NVIC_SystemReset();
//}
//
//void EnterBootloader_Callback(void * param, const std::vector<uint8_t>& payload)
//{
//	// ToDo: Need to check for magic key
//	USBD_Stop(&USBCDC::hUsbDeviceFS);
//	USBD_DeInit(&USBCDC::hUsbDeviceFS);
//	Enter_DFU_Bootloader();
//}
