CC=gcc
AR=ar
FLAGS= -Wall -g

all:libmyMath.so libmyMath.a maind mains 


main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h 
	$(CC) $(FLAGS) -c basicMath.c
	
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o

libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

mains:	main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
	

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
	
.PHONY: clean

clean:
	rm -f *.o *.a *.so mains maind 

	
	


	

