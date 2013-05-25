################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Database/DbAuthorization.cpp \
../src/Database/DbLog.cpp \
../src/Database/DbUser.cpp \
../src/Database/DbUserManager.cpp 

OBJS += \
./src/Database/DbAuthorization.o \
./src/Database/DbLog.o \
./src/Database/DbUser.o \
./src/Database/DbUserManager.o 

CPP_DEPS += \
./src/Database/DbAuthorization.d \
./src/Database/DbLog.d \
./src/Database/DbUser.d \
./src/Database/DbUserManager.d 


# Each subdirectory must supply rules for building sources it contributes
src/Database/%.o: ../src/Database/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


