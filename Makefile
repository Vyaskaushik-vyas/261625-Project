PROJ_NAME = Cable 
BUILD_DIR = Build
SRC = calculate_ampacity.c\
src\calculate_breaker_current.c\
src\calculate_derating_depth.c\
src\calculate_derating_temp.c\
src\calculate_total_derating.c\
src\calculate_voltage_drop.c\
src\conductor_size.c

INC = inc

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:$(BUILD_DIR)
	gcc main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)


