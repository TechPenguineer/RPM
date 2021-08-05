CFLAGS = -Wall
CC=gcc
SRC=$(wildcard src/*.c)
OBJDIR=${wildcard bin/$@.o}
EXEC_NME=RPM

build:
	$(CC) -g -Wall $(SRC) -o bin/$(EXEC_NME)
	$(CC) -g $(CFLAGS) $(SRC) -o bin/$@.o

clean:
	rm $(wildcard bin/*.*)