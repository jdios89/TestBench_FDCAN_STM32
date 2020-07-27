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

#ifndef DEVICES_NANOTEC_H
#define DEVICES_NANOTEC_H

#include "stm32h7xx_hal.h"
#include "NANOTEC_Bus.h"
#include "FDCAN.h" //FDCAN Library

class NANOTEC
{
private:
    const double _M_PI = 3.14159265358979323846264338327950288;
    const float NANOTEC_MAX_RAD_PR_SEC;   // rad/s
    const float NANOTEC_MAX_AMP_SETPOINT; // A
    const float MOTOR_TORQUE_CONSTANT;    // Nm/A
    const uint32_t ENCODER_TICKS_PR_REV;  // ticks/rev on encoder side - hence one revolution on motor shaft (before gearing)
    const float GEARING_RATIO;

public:
    NANOTEC(FDCAN *bus, uint8_t nodeid, float MaxCurrent, float TorqueConstant, float GearRatio, uint32_t EncoderTicksPrRev, float MaxMotorSpeed, bool configPDOS = false);
    NANOTEC(FDCAN *bus, int8_t MotorIndex, float MaxCurrent, float TorqueConstant, float GearRatio, uint32_t EncoderTicksPrRev, float MaxMotorSpeed, bool configPDOS = false); // platform specific constructor
    ~NANOTEC();

    void Enable();
    void Disable();

    bool Configure();
    bool ConfigurePDOS();
    bool IsConfigured();
    bool IsPDOSConfigured();

    bool SetTorque(float torqueNewtonMeter);
    bool SetOutputTorque(float torqueNewtonMeter);
    float GetAppliedTorque();
    float GetAppliedOutputTorque();
    float GetCurrent();
    float GetAngle();
    float GetVelocity();

    int32_t GetEncoderRaw();

private:
    NANOTEC_CANOpen *_bus;
    uint8_t _nodeid; // motor node id s
    bool _deleteObjectsAtDestruction;
    bool _configuredPDOS; 
    bool _configured;
};

#endif