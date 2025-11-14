CXX = g++
CXXFLAGS = -ggdb3 -pedantic -pedantic-errors -Wall -Werror -Wextra -Wconversion -Wsign-conversion -std=c++23
CXXFLAGS += -I./plog-1.1.11/include/
LDFLAGS = 

all: bin/main.elf

bin/main.elf: obj/main.o
	$(CXX) $(LDFLAGS) $< -o $@

obj/main.o: src/main.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm obj/*.o bin/*.elf
