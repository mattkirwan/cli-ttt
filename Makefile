all: tti-cli

tti-cli: main.o tictactoe.o 
		g++ main.o tictactoe.o -o tti-cli
main.o: main.cpp
		g++ -c main.cpp

tictactoe.o: tictactoe.cpp
		g++ -c tictactoe.cpp

clean:
	rm -rf *o tti-cli