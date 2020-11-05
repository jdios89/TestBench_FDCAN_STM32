################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/FreeRTOS-openocd.c \
../Src/MemoryManagement.c \
../Src/freertos.c \
../Src/main.c \
../Src/stm32h7xx_hal_msp.c \
../Src/stm32h7xx_hal_timebase_tim.c \
../Src/stm32h7xx_it.c \
../Src/stm32h7xx_nucleo_144.c \
../Src/syscalls.c \
../Src/system_stm32h7xx.c 

CPP_SRCS += \
../Src/MainTask.cpp \
../Src/TestBench.cpp 

OBJS += \
./Src/FreeRTOS-openocd.o \
./Src/MainTask.o \
./Src/MemoryManagement.o \
./Src/TestBench.o \
./Src/freertos.o \
./Src/main.o \
./Src/stm32h7xx_hal_msp.o \
./Src/stm32h7xx_hal_timebase_tim.o \
./Src/stm32h7xx_it.o \
./Src/stm32h7xx_nucleo_144.o \
./Src/syscalls.o \
./Src/system_stm32h7xx.o 

C_DEPS += \
./Src/FreeRTOS-openocd.d \
./Src/MemoryManagement.d \
./Src/freertos.d \
./Src/main.d \
./Src/stm32h7xx_hal_msp.d \
./Src/stm32h7xx_hal_timebase_tim.d \
./Src/stm32h7xx_it.d \
./Src/stm32h7xx_nucleo_144.d \
./Src/syscalls.d \
./Src/system_stm32h7xx.d 

CPP_DEPS += \
./Src/MainTask.d \
./Src/TestBench.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DUSE_HAL_DRIVER -DSTM32H743xx -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/%.o: ../Src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DUSE_HAL_DRIVER -DSTM32H743xx -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Periphirals/FDCAN" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/NanotecMotorRegisters" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Devices/NANOTEC" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Periphirals/Timer" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Modules/Estimators/Kinematics_tilted"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


