all: main.o
	gcc -o test11 main.o
main.o: main.c
	gcc -c main.c
clean:
	rm test11 main.o
run: all
	./test11
