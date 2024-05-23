all: treug

treug: main.o geo.o serch.o
	g++ main.o geo.o serch.o -o treug

main.o: CPP/main.cpp
	g++ -c CPP/main.cpp

geo.o: CPP/geo.cpp
	g++ -c CPP/geo.cpp

serch.o: CPP/serch.cpp
	g++ -c CPP/serch.cpp
clean:
	rm -rf *.o serch