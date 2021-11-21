FLAG = -Wall -g

all: main.o my_mat.o libmy_mat.a

main.o: main.c my_mat.h
	gcc $(FLAG) -c main.c 

my_mat.o: my_mat.c my_mat.h
	gcc $(FLAG) -c my_mat.c

libmy_mat.a: my_mat.o my_mat.h
	ar -rcs -o libmy_mat.a my_mat.o

clean:
	rm -f *.o *.a 