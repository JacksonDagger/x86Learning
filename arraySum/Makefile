CC = gcc
CFLAGS = -g -Wall
AS = gcc -c
ASFLAGS = -g
LDFLAGS =

all: testSum

testSum:        arraySum.o testSum.o

arraySum.o:      arraySum.s
testSum.o:     testSum.c

clean:
	-rm -f *.o testSum
tidy: clean
	-rm -f *~

run: testarray
	./testSum

##.s.o:;        gcc $(CFLAGS) -c -o $*.o $*.s
