################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Database/DatabaseConnection/ConnectionManager.cpp \
../src/Database/DatabaseConnection/ConnectionProvider.cpp \
../src/Database/DatabaseConnection/MySQLConnectionProvider.cpp 

OBJS += \
./src/Database/DatabaseConnection/ConnectionManager.o \
./src/Database/DatabaseConnection/ConnectionProvider.o \
./src/Database/DatabaseConnection/MySQLConnectionProvider.o 

CPP_DEPS += \
./src/Database/DatabaseConnection/ConnectionManager.d \
./src/Database/DatabaseConnection/ConnectionProvider.d \
./src/Database/DatabaseConnection/MySQLConnectionProvider.d 


# Each subdirectory must supply rules for building sources it contributes
src/Database/DatabaseConnection/%.o: ../src/Database/DatabaseConnection/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


