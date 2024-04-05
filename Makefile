SRC_DIR = src
BUILD_DIR = build/debug
CC = g++
CC_FLAGS = -std=c++11 -Wall -Wextra -Werror -O0 -g
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_NAME = chip8
INCLUDE_PATHS = -Iinclude/SDL2
LINKER_FLAGS = -lSDL2
LIBRARY_PATHS = -Llib/SDL2

compile:
	$(CC) $(CC_FLAGS) $(LINKER_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)

clean:
	rm -rf $(BUILD_DIR)/*

run:
	$(BUILD_DIR)/$(OBJ_NAME)
