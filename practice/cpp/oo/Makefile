CC := g++

FLAGS := 

SRCFILES := $(wildcard src/*.cpp)

all: $(SRCFILES:src/%.cpp=obj/%.o)
	$(CC) $(FLAGS) obj/*.o -o bin/prog

obj/%.o: src/%.cpp
	$(CC) $(FLAGS) -c $< -o $@ -I./inc

run: bin/prog
	bin/prog

.PHONY: clean
clean:
	rm -rf obj/*
	rm -rf bin/*
