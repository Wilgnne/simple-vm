CC = gcc
CC_FLAGS = -Wall -Wextra -g -std=c11

# Location of the files
SRC = src
HEAD = include
OBJ_DIR = build
SOURCES = $(wildcard $(SRC)/*.c)
OBJECTS = $(patsubst $(SRC)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
HEADERS = $(wildcard $(HEAD)/*.h)

COMPILE_SRC = compiler/src
COMPILE_HEAD = compile/include
COMPILE_OBJ_DIR = build/compile
COMPILE_SOURCES = $(wildcard $(COMPILE_SRC)/*.c)
COMPILE_OBJECTS = $(patsubst $(COMPILE_SRC)/%.c, $(COMPILE_OBJ_DIR)/%.o, $(COMPILE_SOURCES))
COMPILE_HEADERS = $(wildcard $(COMPILE_HEAD)/*.h)

PROJ_NAME = ss-vm.out
COMPILE_PROJ_NAME = ss-vm-compile.out

all: $(OBJECTS) $(COMPILE_OBJECTS) $(HEADERS)
	make vm
	make compiler

vm: $(OBJECTS) $(HEADERS)
	@echo building the virtual machine
	@echo $(OBJECTS)
	$(CC) -o $(PROJ_NAME) $(OBJECTS)

compiler: $(COMPILE_OBJECTS) $(COMPILE_HEADERS)
	@echo building the compiler
	@echo $(COMPILE_OBJECTS)
	$(CC) -o $(COMPILE_PROJ_NAME) $(COMPILE_OBJECTS)

$(OBJ_DIR)/%.o: $(SRC)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(SRC) -I$(HEAD) -c $< -o $@

$(COMPILE_OBJ_DIR)/%.o: $(COMPILE_SRC)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(COMPILE_SRC) -I$(COMPILE_HEAD) -c $< -o $@