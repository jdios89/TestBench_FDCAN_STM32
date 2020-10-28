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

#ifndef MAIN_TASK_H
#define MAIN_TASK_H

#ifdef __cplusplus
extern "C" {
#endif

void MainTask(void * pvParameters);
void testTask();

#ifdef __cplusplus
}

//#include "LSPC.hpp"
//void Reboot_Callback(void * param, const std::vector<uint8_t>& payload);
//void EnterBootloader_Callback(void * param, const std::vector<uint8_t>& payload);

#endif

#endif
