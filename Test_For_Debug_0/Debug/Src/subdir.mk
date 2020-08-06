################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/stm32h7xx_hal_msp.c \
../Src/stm32h7xx_it.c \
../Src/stm32h7xx_nucleo_144.c \
../Src/syscalls.c \
../Src/system_stm32h7xx.c 

CPP_SRCS += \
../Src/TestBench.cpp 

OBJS += \
./Src/TestBench.o \
./Src/main.o \
./Src/stm32h7xx_hal_msp.o \
./Src/stm32h7xx_it.o \
./Src/stm32h7xx_nucleo_144.o \
./Src/syscalls.o \
./Src/system_stm32h7xx.o 

C_DEPS += \
./Src/main.d \
./Src/stm32h7xx_hal_msp.d \
./Src/stm32h7xx_it.d \
./Src/stm32h7xx_nucleo_144.d \
./Src/syscalls.d \
./Src/system_stm32h7xx.d 

CPP_DEPS += \
./Src/TestBench.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DUSE_HAL_DRIVER -DSTM32H743xx -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Periphirals/FDCAN" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/NanotecMotorRegisters" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Devices/NANOTEC"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DUSE_HAL_DRIVER -DSTM32H743xx -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Inc"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


