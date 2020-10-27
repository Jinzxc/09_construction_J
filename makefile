all: main.o night.o
	gcc -o main main.o night.o

main.o: main.c night.h
	gcc -c main.c

night.o: night.c night.h
	gcc -c night.c

run:
	./main

clean:
	rm *.o