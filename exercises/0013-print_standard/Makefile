CXX = g++
CXXFLAGS = -ggdb3 -pedantic -pedantic-errors -Wall -Werror -Wextra -Weffc++ -Wconversion -Wsign-conversion -std=c++23
LDFLAGS = 

all: bin/main.elf

bin/main.elf: obj/main.o
	$(CXX) $(LDFLAGS) obj/main.o -o bin/main.elf

obj/main.o: src/main.cpp
	$(CXX) -c $(CXXFLAGS) src/main.cpp -o obj/main.o

.PHONY: clean
clean:
	rm obj/main.o bin/main.elf
