#prebared by Abdelrhman Ellawendi
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mthumb -mcpu=cortex-m3
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
project_name=learn-in-depth_cortexM4

all: $(project_name).hex

%.o: %.s
	$(CC)as.exe  $(CFLAGS)  $< -o $@
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
$(project_name).elf: $(OBJ) $(ASOBJ) 
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_file.map
$(project_name).hex: $(project_name).elf
	$(CC)objcopy.exe  -O binary  $<  $@
clean_all:
	rm *.o *.hex *elf
	@echo "Everything clean"