################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../button.c \
../gpio.c \
../main.c \
../seven_segment.c \
../timer1.c \
../traffic_light.c 

OBJS += \
./button.o \
./gpio.o \
./main.o \
./seven_segment.o \
./timer1.o \
./traffic_light.o 

C_DEPS += \
./button.d \
./gpio.d \
./main.d \
./seven_segment.d \
./timer1.d \
./traffic_light.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


