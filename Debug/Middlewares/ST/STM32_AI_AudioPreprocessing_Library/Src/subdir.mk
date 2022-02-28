################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.c \
../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.c \
../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.c \
../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.c \
../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.c 

OBJS += \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.o \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.o \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.o \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.o \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.o 

C_DEPS += \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.d \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.d \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.d \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.d \
./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/%.o: ../Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/%.c Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../X-CUBE-AI/App -I../X-CUBE-AI -I../USB_HOST/App -I../USB_HOST/Target -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/Core/Include/ -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/Core_A/Include/ -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/DSP/Include -I"C:/Users/davis/projects/target_acoustic_alert_detector/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-ST-2f-STM32_AI_AudioPreprocessing_Library-2f-Src

clean-Middlewares-2f-ST-2f-STM32_AI_AudioPreprocessing_Library-2f-Src:
	-$(RM) ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.d ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.o ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.d ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.o ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.d ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.o ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.d ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.o ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.d ./Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.o

.PHONY: clean-Middlewares-2f-ST-2f-STM32_AI_AudioPreprocessing_Library-2f-Src

