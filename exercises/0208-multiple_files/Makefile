CXX = g++
CXXFLAGS = -ggdb3 -pedantic -pedantic-errors -Wall -Werror -Wextra -Weffc++ -Wconversion -Wsign-conversion -std=c++23
LDFLAGS = 

all: bin/main.elf

bin/main.elf: obj/main.o obj/add.o
	$(CXX) $(LDFLAGS) $^ -o $@

obj/add.o: src/add.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

obj/main.o: src/main.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm obj/main.o bin/main.elf
