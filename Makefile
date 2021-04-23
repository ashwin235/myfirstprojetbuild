Abc.exe: main.o big.o fact.o   
	gcc -o abc.exe main.o big.o fact.o

Main.o: main.c
	gcc -c main.c

Big.o: big.c
	gcc -c big.c

fact.o: fact.c
	gcc -c fact.c

clean:
	rm *.o
