cc=gcc
CFLAGS = -g -c 
OBJDIR = objects
SRC= $(wildcard src/*.c src/global/*.c )
SRCH= $(wildcard src/*.h )


BUILD_TARG = ${SRC} src/handle.h
build: ${BUILD_TARG}
	${cc} -g -Wall -o RPM ${SRC}
	${cc} -g ${CFLAGS} ${SRC} -o bin/$@.o
	
clean: 
	rm ${wildcard *.o}
	rm ${wildcard *.exe}

rebuild:
	make clean
	make build