CC = g++
CC_FLAGS = -Wno-attributes -Llib
CC_LIBS = -I/usr/include/antlr4-runtime

# Location of the files
SRC = src
ANTLR_SRC = $(SRC)/antlr

HEAD = include
OBJ_DIR = build
ANTLR_DIR = $(OBJ_DIR)/antlr


SOURCES = $(wildcard $(SRC)/*.cpp) $(wildcard $(SRC)/**/*.cpp)

OBJECTS = $(patsubst $(SRC)/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))

HEADERS = $(wildcard $(HEAD)/*.h) $(wildcard $(GLOBAL_HEAD)/*.h)

PROJ_NAME = $(BIN_DIR)/ss-asm

all:
	@$(MAKE) antlr
	@$(MAKE) assembler

assembler: $(OBJECTS) $(HEADERS)
	@echo building the assembler
	@echo $(OBJECTS)
	$(CC) -o $(PROJ_NAME) $(OBJECTS) /usr/lib/x86_64-linux-gnu/libantlr4-runtime.a

antlr:
	@echo building antlr4 grammar
	@mkdir -p $(ANTLR_SRC)
	@antlr4 -Dlanguage=Cpp -no-listener -o $(ANTLR_SRC) src/Stack.g4 -Xexact-output-dir
	mv $(ANTLR_SRC)/*.h $(HEAD)

$(OBJ_DIR)/%.o: $(SRC)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CC_FLAGS) -I$(SRC) -I$(HEAD) -I$(GLOBAL_HEAD) -c $< -o $@ $(CC_LIBS)

.PHONY: clean
clean:
	@$(RM) -r -f $(OBJ_DIR)
