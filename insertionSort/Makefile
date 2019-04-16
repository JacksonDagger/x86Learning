CC = gcc
CFLAGS = -g -Wall
AS = gcc -c
ASFLAGS = -g
LDFLAGS =

all: test_sort

test_sort:	test_sort.o	isort.o

isort.o:	isort.s
test_sort.o:	test_sort.c

clean:
	-rm -f *.o test_sort
tidy: clean
	-rm -f *~

run: test_sort
	./test_sort

##.s.o:;        gcc $(CFLAGS) -c -o $*.o $*.s                                                   
