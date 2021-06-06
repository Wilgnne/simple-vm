MAKE_DIR = $(PWD)
BIN_DIR = $(MAKE_DIR)/bin

VM_DIR    := $(MAKE_DIR)/vm
INCLUDE_DIR := $(MAKE_DIR)/include

CC = gcc
CC_FLAGS = -Wall -Wextra -g -std=c11

export MAKE_DIR BIN_DIR CC CC_FLAGS

all:
	@mkdir -p bin
	@$(MAKE) -C vm

.PHONY: clean
clean:
	@$(RM) -r -f $(BIN_DIR)
	@$(MAKE) -C vm clean
