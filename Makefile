CC = gcc
CC_FLAGS = -Wall -Wextra -g -std=c11

# Location of the files
SRC = src
HEAD = include
OBJ_DIR = build
SOURCES = $(wildcard $(SRC)/*.c)
OBJECTS = $(patsubst $(SRC)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
HEADERS = $(wildcard $(HEAD)/*.h)

PROJ_NAME = ss-vm.out

all: $(OBJECTS) $(HEADERS)
	@echo $(OBJECTS)
	$(CC) -o $(PROJ_NAME) $(OBJECTS)

$(OBJ_DIR)/%.o: $(SRC)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(SRC) -I$(HEAD) -c $< -o $@
