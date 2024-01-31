APP_NAME=app
CC=clang++
VERSION=-std=c++17
BUILD_DIR=bin
C_FILES=./*.cpp
INCLUDES=-I./*.hpp

build:
	$(CC) $(VERSION) $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(INCLUDES)

clean:
	rm -rf bin/app

