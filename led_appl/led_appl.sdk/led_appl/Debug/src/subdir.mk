################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

CC_SRCS += \
../src/DisplayDriver.cc \
../src/DynamicLed.cc \
../src/GUI.cc \
../src/LedMatrixDriver.cc \
../src/MainFsm.cc \
../src/StaticLed.cc \
../src/Tetris.cc \
../src/main.cc 

CC_DEPS += \
./src/DisplayDriver.d \
./src/DynamicLed.d \
./src/GUI.d \
./src/LedMatrixDriver.d \
./src/MainFsm.d \
./src/StaticLed.d \
./src/Tetris.d \
./src/main.d 

OBJS += \
./src/DisplayDriver.o \
./src/DynamicLed.o \
./src/GUI.o \
./src/LedMatrixDriver.o \
./src/MainFsm.o \
./src/StaticLed.o \
./src/Tetris.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: MicroBlaze g++ compiler'
	mb-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -I../../led_appl_bsp/microblaze_0/include -mlittle-endian -mcpu=v11.0 -mxl-soft-mul -Wl,--no-relax -ffunction-sections -fdata-sections -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


