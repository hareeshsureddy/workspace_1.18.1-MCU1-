################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/001_Toggle_LED.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/001_Toggle_LED.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/001_Toggle_LED.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/001_Toggle_LED.o: ../Src/001_Toggle_LED.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I"C:/Users/Hareesh/STM32CubeIDE/workspace_1.18.1/007_stm32f4xx_driver/Inc" -I"C:/Users/Hareesh/STM32CubeIDE/workspace_1.18.1/007_stm32f4xx_driver/Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I"C:/Users/Hareesh/STM32CubeIDE/workspace_1.18.1/007_stm32f4xx_driver/Inc" -I"C:/Users/Hareesh/STM32CubeIDE/workspace_1.18.1/007_stm32f4xx_driver/Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/001_Toggle_LED.cyclo ./Src/001_Toggle_LED.d ./Src/001_Toggle_LED.o ./Src/001_Toggle_LED.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

