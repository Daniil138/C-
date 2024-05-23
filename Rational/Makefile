all: Result

Result: main.o Rational.o 
	g++ main.o Rational.o  -o Result

main.o: CPP/main.cpp
	g++ -c CPP/main.cpp

Rational.o: CPP/Rational.cpp
	g++ -c CPP/Rational.cpp

clean:
	rm -rf *.o serch