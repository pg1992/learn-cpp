CXX = g++
CXXFLAGS = -ggdb3 -pedantic -pedantic-errors -Wall -Werror -Wextra -Weffc++ -Wconversion -Wsign-conversion -std=c++23
LDFLAGS = 

all: bin/main.elf

bin/main.elf: obj/main.o obj/io.o
	$(CXX) $(LDFLAGS) $^ -o $@

obj/main.o: src/main.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

obj/io.o: src/io.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf obj/* bin/*
