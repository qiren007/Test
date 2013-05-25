################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Service/ConfigOptions.cpp \
../src/Service/Function.cpp \
../src/Service/MediaControl.cpp \
../src/Service/ParametersParse.cpp \
../src/Service/PocoServerProvider.cpp \
../src/Service/ProtocolHandle.cpp \
../src/Service/ServerManager.cpp \
../src/Service/ServerProvider.cpp 

OBJS += \
./src/Service/ConfigOptions.o \
./src/Service/Function.o \
./src/Service/MediaControl.o \
./src/Service/ParametersParse.o \
./src/Service/PocoServerProvider.o \
./src/Service/ProtocolHandle.o \
./src/Service/ServerManager.o \
./src/Service/ServerProvider.o 

CPP_DEPS += \
./src/Service/ConfigOptions.d \
./src/Service/Function.d \
./src/Service/MediaControl.d \
./src/Service/ParametersParse.d \
./src/Service/PocoServerProvider.d \
./src/Service/ProtocolHandle.d \
./src/Service/ServerManager.d \
./src/Service/ServerProvider.d 


# Each subdirectory must supply rules for building sources it contributes
src/Service/%.o: ../src/Service/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


