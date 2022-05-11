CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11 -I include -c -o
CXXFLAGS2 = -m64 -Og -g 

all: Console.o Cursor.o Position.o SimpleInput.o Spielstein.o Tibongo.o Aufgabe.o Tibongo

Console.o: src/Console.cpp
	$(CXX) $(CXXFLAGS) Console.o src/Console.cpp

Cursor.o: src/Cursor.cpp
	$(CXX) $(CXXFLAGS) Cursor.o src/Cursor.cpp

Position.o: src/Position.cpp
	$(CXX) $(CXXFLAGS) Position.o src/Position.cpp

SimpleInput.o: src/SimpleInput.cpp
	$(CXX) $(CXXFLAGS) SimpleInput.o src/SimpleInput.cpp

Spielstein.o: src/Spielstein.cpp
	$(CXX) $(CXXFLAGS) Spielstein.o src/Spielstein.cpp

Aufgabe.o: src/Aufgabe.cpp
	$(CXX) $(CXXFLAGS) Aufgabe.o src/Aufgabe.cpp

Spiel.o: src/Spiel.cpp
	$(CXX) $(CXXFLAGS) Spiel.o src/Spiel.cpp

Tibongo.o: src/Tibongo.cpp
	$(CXX) $(CXXFLAGS) Tibongo.o src/Tibongo.cpp

Tibongo: Console.o Cursor.o Position.o SimpleInput.o Spielstein.o Tibongo.o Spiel.o
	$(CXX) $(CXXFLAGS2) Console.o Cursor.o Position.o SimpleInput.o Spielstein.o Tibongo.o Spiel.o -o Tibongo

clean: 
	rm *.o