CC = gcc 
CFLAGS = -g -Wall
AS = gcc -c
ASFLAGS = -g
LDFLAGS = 

all: testmax

testmax:        max.o testmax.o

max.o:      max.s
testmax.o:  testmax.c

clean:
	-rm -f *.o testmax
tidy: clean
	-rm -f *~

run: testmax
	./testmax

##.s.o:;        gcc $(CFLAGS) -c -o $*.o $*.s

