FLAGS = -Wall -Wno-unused-result

DEPS = exercicio4.h
OBJ = exercicio4.o principal.o

%.o: %.c $(DEPS)
	gcc -g -c -o $@ $< $(FLAGS)

all: $(OBJ)
	gcc -g -o main $(OBJ) $(FLAGS)

clean:
	rm -f main *.o
	
run: 
	./main