main: main.o
	g++ -o main main.o

tests: tests.o
	g++ -o tests tests.o



main.o: main.cpp MyVector.o

tests.o: tests.cpp MyVector.o

MyVector.o: MyVector.h MyVector.cxx

clean:
	rm -f main.o tests.o MyVector.o
