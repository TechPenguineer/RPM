CFLAGS = -Wall
CC=gcc
SRC=$(wildcard src/*.c)
OBJDIR=${wildcard bin/$@.o}

BUILD_DIRS=$(SRC) $(wildcard src/global/*.c) src/handle.h
EXEC_NME=RPM

BUILD_TARG = $(BUILD_DIRS)

build: $(BUILD_DIRS)
	$(CC) -g $(wildcard src/*.h) -o bin/$@.o
	$(CC) -g $(CFLAGS) $(BUILD_TARG) -o bin/$@.o
	$(CC) -g -Wall -o RPM $(BUILD_TARG) 

clean:
	rm $(wildcard bin/*.*)