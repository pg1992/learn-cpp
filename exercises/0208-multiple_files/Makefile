CXX = g++
CXXFLAGS = -ggdb3 -pedantic -pedantic-errors -Wall -Werror -Wextra -Weffc++ -Wconversion -Wsign-conversion -std=c++23
LDFLAGS = 

all: bin/main.elf

bin/main.elf: obj/main.o obj/input.o
	$(CXX) $(LDFLAGS) $^ -o $@

obj/input.o: src/input.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

obj/main.o: src/main.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm obj/*.o bin/*.elf
