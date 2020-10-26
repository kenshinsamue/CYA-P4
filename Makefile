
# Macros

CC = g++
OBJ = main.o fibonacci_words.o

all: $(OBJ)
	$(CC) -std=c++14 -g -Wall -o fibonacci_words  $(OBJ)
	$(RM) $(OBJ)
clean:
	$(RM) $(OBJ) fibonacci_words   
main.o: main.cc
fibonacci_words.o : fibonacci_words.cc 
