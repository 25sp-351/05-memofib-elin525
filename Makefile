CC = gcc
CFLAGS = -Wall -Wextra -g

all: fib

fib: main.o fib.o
	$(CC) $(CFLAGS) -o fib main.o fib.o

main.o: main.c fib.h
	$(CC) $(CFLAGS) -c main.c

fib.o: fib.c fib.h
	$(CC) $(CFLAGS) -c fib.c

clean:
	rm -f fib main.o fib.o
