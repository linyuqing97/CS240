
P=lab3
X=Star
Y=Planet

CFLAGS= -c -Wall -g 

all:$(P)

lab3:lab3.o $(X).o $(Y).o
	g++ $(P).o $(X).o $(Y).o -o $(P)

lab3.o:lab3.cpp
	g++ $(CFLAGS) -c $(P).cpp -o $(P).o

$(X).o::$(X).cpp $(X).h
	g++ $(CFLAGS) -c $(X).cpp -o $(X).o

$(Y).o::$(Y).cpp $(Y).h
	g++ $(CFLAGS) -c $(Y).cpp -o $(Y).o

memcheck:
	valgrind ./lab3

clean:
	rm -rf $(P)*.o $(X)*.o $(Y)*.o

run: all
	./$(P)
