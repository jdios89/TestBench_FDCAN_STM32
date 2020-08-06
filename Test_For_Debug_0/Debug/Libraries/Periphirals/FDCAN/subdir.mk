################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Libraries/Periphirals/FDCAN/FDCAN.cpp 

OBJS += \
./Libraries/Periphirals/FDCAN/FDCAN.o 

CPP_DEPS += \
./Libraries/Periphirals/FDCAN/FDCAN.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/Periphirals/FDCAN/%.o: ../Libraries/Periphirals/FDCAN/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DUSE_HAL_DRIVER -DSTM32H743xx -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Drivers/CMSIS/Include" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Periphirals/FDCAN" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Inc" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/NanotecMotorRegisters" -I"/home/tequilajohn/STM32CubeIDE/workspace_1.0.2/FDCAN_repository/Test_For_Debug_0/Libraries/Devices/NANOTEC"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


