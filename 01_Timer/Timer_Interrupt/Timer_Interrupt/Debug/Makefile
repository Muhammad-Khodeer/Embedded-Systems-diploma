################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../TI_APP_Layer \
../TI_APP_Layer/TI_HW_Layer \
../TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../TI_APP_Layer/Timer_Interrupt.c \
../TI_APP_Layer/TI_HW_Layer/TI_HW_Layer.c \
../TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/TI_MCAL_Layer.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
TI_APP_Layer/Timer_Interrupt.o \
TI_APP_Layer/TI_HW_Layer/TI_HW_Layer.o \
TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/TI_MCAL_Layer.o

OBJS_AS_ARGS +=  \
TI_APP_Layer/Timer_Interrupt.o \
TI_APP_Layer/TI_HW_Layer/TI_HW_Layer.o \
TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/TI_MCAL_Layer.o

C_DEPS +=  \
TI_APP_Layer/Timer_Interrupt.d \
TI_APP_Layer/TI_HW_Layer/TI_HW_Layer.d \
TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/TI_MCAL_Layer.d

C_DEPS_AS_ARGS +=  \
TI_APP_Layer/Timer_Interrupt.d \
TI_APP_Layer/TI_HW_Layer/TI_HW_Layer.d \
TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/TI_MCAL_Layer.d

OUTPUT_FILE_PATH +=Timer_Interrupt.elf

OUTPUT_FILE_PATH_AS_ARGS +=Timer_Interrupt.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler







TI_APP_Layer/%.o: ../TI_APP_Layer/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

TI_APP_Layer/TI_HW_Layer/%.o: ../TI_APP_Layer/TI_HW_Layer/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/%.o: ../TI_APP_Layer/TI_HW_Layer/TI_MCAL_Layer/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Timer_Interrupt.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32a  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Timer_Interrupt.elf" "Timer_Interrupt.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Timer_Interrupt.elf" "Timer_Interrupt.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Timer_Interrupt.elf" > "Timer_Interrupt.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Timer_Interrupt.elf" "Timer_Interrupt.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-size.exe" "Timer_Interrupt.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Timer_Interrupt.elf" "Timer_Interrupt.a" "Timer_Interrupt.hex" "Timer_Interrupt.lss" "Timer_Interrupt.eep" "Timer_Interrupt.map" "Timer_Interrupt.srec" "Timer_Interrupt.usersignatures"
	