CC = g++

FLAGS = -g -O2

CFLAGS = ${FLAGS} -c -I.

all: proptp

proptp : proptp.o
	${CC} ${FLAGS} -o proptp proptp.o ${LIBS}	

proptp.o : proptp.cpp
	${CC} ${CFLAGS} proptp.cpp

clean:
	rm *.o proptp
