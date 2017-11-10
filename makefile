all: main.o exec.o
	gcc -o test11 main.o
	gcc -o executable exec.o
main.o: main.c
	gcc -c main.c
exec.o: exec.c
	gcc -c exec.c
clean:
	rm test11 executable *.o
run: all
	./test11
