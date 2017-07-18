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
../SSEG_APP_Layer \
../SSEG_APP_Layer/SSEG_HW_Layer \
../SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../SSEG_APP_Layer/Seven_Segment_Driver_Two.c \
../SSEG_APP_Layer/SSEG_HW_Layer/SSEG_HW_Layer.c \
../SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/SSEG_MCAL_Layer.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
SSEG_APP_Layer/Seven_Segment_Driver_Two.o \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_HW_Layer.o \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/SSEG_MCAL_Layer.o

OBJS_AS_ARGS +=  \
SSEG_APP_Layer/Seven_Segment_Driver_Two.o \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_HW_Layer.o \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/SSEG_MCAL_Layer.o

C_DEPS +=  \
SSEG_APP_Layer/Seven_Segment_Driver_Two.d \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_HW_Layer.d \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/SSEG_MCAL_Layer.d

C_DEPS_AS_ARGS +=  \
SSEG_APP_Layer/Seven_Segment_Driver_Two.d \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_HW_Layer.d \
SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/SSEG_MCAL_Layer.d

OUTPUT_FILE_PATH +=Seven_Segment_Driver_Two.elf

OUTPUT_FILE_PATH_AS_ARGS +=Seven_Segment_Driver_Two.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler







SSEG_APP_Layer/%.o: ../SSEG_APP_Layer/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

SSEG_APP_Layer/SSEG_HW_Layer/%.o: ../SSEG_APP_Layer/SSEG_HW_Layer/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/%.o: ../SSEG_APP_Layer/SSEG_HW_Layer/SSEG_MCAL_Layer/%.c
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
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Seven_Segment_Driver_Two.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32a  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Seven_Segment_Driver_Two.elf" "Seven_Segment_Driver_Two.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Seven_Segment_Driver_Two.elf" "Seven_Segment_Driver_Two.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Seven_Segment_Driver_Two.elf" > "Seven_Segment_Driver_Two.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Seven_Segment_Driver_Two.elf" "Seven_Segment_Driver_Two.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-size.exe" "Seven_Segment_Driver_Two.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Seven_Segment_Driver_Two.elf" "Seven_Segment_Driver_Two.a" "Seven_Segment_Driver_Two.hex" "Seven_Segment_Driver_Two.lss" "Seven_Segment_Driver_Two.eep" "Seven_Segment_Driver_Two.map" "Seven_Segment_Driver_Two.srec" "Seven_Segment_Driver_Two.usersignatures"
	