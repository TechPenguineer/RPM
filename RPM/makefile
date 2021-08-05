CFLAGS = -Wall
CC=gcc
SRC=$(wildcard src/*.c)
OBJDIR=${wildcard bin/$@.o}

BUILD_DIRS=$(SRC) $(wildcard src/global/*.c) $(wildcard src/handle.h)
EXEC_NME=RPM

build:
	$(CC) -g -Wall $(BUILD_DIRS) -o bin/$(EXEC_NME)
	$(CC) -g $(CFLAGS) $(BUILD_DIRS) -o bin/$@.o

clean:
	rm $(wildcard bin/*.*)