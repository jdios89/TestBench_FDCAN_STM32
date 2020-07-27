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

#include "NANOTEC.h"
#include "stm32h7xx_hal.h"
#include "NANOTEC_Bus.h"
#include "FDCAN.h" //FDCAN Library

NANOTEC::NANOTEC(FDCAN *bus, uint8_t nodeid, float MaxCurrent, float TorqueConstant, float GearRatio, uint32_t EncoderTicksPrRev, float MaxMotorSpeed, bool configPDOS) : NANOTEC_MAX_AMP_SETPOINT(MaxCurrent),
                                                                                                                                                                          MOTOR_TORQUE_CONSTANT(TorqueConstant),
                                                                                                                                                                          ENCODER_TICKS_PR_REV(EncoderTicksPrRev),
                                                                                                                                                                          GEARING_RATIO(GearRatio),
                                                                                                                                                                          NANOTEC_MAX_RAD_PR_SEC(MaxMotorSpeed),
                                                                                                                                                                          _nodeid(nodeid),
                                                                                                                                                                          _deleteObjectsAtDestruction(false),
                                                                                                                                                                          _configured(false),
                                                                                                                                                                          _configuredPDOS(false)
{
    _bus = new NANOTEC_CANOpen(bus);
    _configured = Configure();
    uint8_t tries = 5;
    if (configPDOS)
    {
        while (tries < 5)
        {
            _configuredPDOS = ConfigurePDOS();
            if (_configuredPDOS)
            {
                break;
            }
            tries++;
        }
    }
    SetTorque(0);
    Disable();
}

NANOTEC::NANOTEC(FDCAN *bus, int8_t MotorIndex, float MaxCurrent, float TorqueConstant, float GearRatio, uint32_t EncoderTicksPrRev, float MaxMotorSpeed, bool configPDOS) : NANOTEC_MAX_AMP_SETPOINT(MaxCurrent),
                                                                                                                                                                             MOTOR_TORQUE_CONSTANT(TorqueConstant),
                                                                                                                                                                             ENCODER_TICKS_PR_REV(EncoderTicksPrRev),
                                                                                                                                                                             GEARING_RATIO(GearRatio),
                                                                                                                                                                             NANOTEC_MAX_RAD_PR_SEC(MaxMotorSpeed),
                                                                                                                                                                             _nodeid(0),
                                                                                                                                                                             _deleteObjectsAtDestruction(false),
                                                                                                                                                                             _configured(false),
                                                                                                                                                                             _configuredPDOS(false)
{
    _bus = new NANOTEC_CANOpen(bus);
    // Instantiate periphiral objects according to selected motor index
    if (MotorIndex == 1)
        _nodeid = 0x1;
    else if (MotorIndex == 2)
        _nodeid = 0x2;
    else if (MotorIndex == 3)
        _nodeid = 0x3;
    else
    {
        // Error message
        // ERROR("Incorrect motor index");s
        return;
    }
    _configured = Configure();
    uint8_t tries = 5;
    if (configPDOS)
    {
        while (tries < 5)
        {
            _configuredPDOS = ConfigurePDOS();
            if (_configuredPDOS)
                break;

            tries++;
        }
    }
    SetTorque(0);
    Disable();
}

NANOTEC::~NANOTEC()
{
    if (_deleteObjectsAtDestruction)
        if (_bus)
            delete (_bus);
}

void NANOTEC::Enable()
{
    // check if it is configured
    if (!_configured)
    {
        _configured = Configure();
    }
    // set to switch on
}

void NANOTEC::Disable()
{
    // check if it is configured
    if (!_configured)
    {
        _configured = Configure();
    }
    // set to ready to switch on. Follow diagram of state machine
}

bool NANOTEC::Configure()
{
    return true;
}

bool NANOTEC::ConfigurePDOS()
{
    return true;
}

bool NANOTEC::IsConfigured()
{
    return _configured;
}
bool NANOTEC::IsPDOSConfigured()
{
    return _configuredPDOS;
}

bool NANOTEC::SetTorque(float torqueNewtonMeter)
{
    return true;
}

bool NANOTEC::SetOutputTorque(float torqueNewtonMeter)
{
    return true;
}

float GetAppliedTorque()
{
    return 1.0f;
}

float GetAppliedOutputTorque()
{
    return 1.0f;
}

float GetCurrent()
{
    return 1.0f;
}

float GetAngle()
{
    return 1.0f;
}

float GetVelocity()
{
    return 1.0f;
}


int32_t GetEncoderRaw()
{
    return 0x32;
}

