CFLAGS = -Wall
CC=gcc
SRC=$(wildcard src/*.c)


%.o: %.c $(SRC)
	$(CC) -c -o $@ $< $(CFLAGS)