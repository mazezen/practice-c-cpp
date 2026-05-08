CC = clang
CFLAGS = -Wall -O2
LIBS = -lsqlite3

all: main.out

test: main.c
	$(CC) $(CFLAGS) main.c -o main.out $(LIBS) && ./main.out

clean:
	rm -f main.out
