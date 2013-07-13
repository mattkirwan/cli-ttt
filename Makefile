all: cli-ttt

cli-ttt: main.o tictactoe.o 
		g++ main.o tictactoe.o -o cli-ttt
main.o: main.cpp
		g++ -c main.cpp

tictactoe.o: tictactoe.cpp
		g++ -c tictactoe.cpp

clean:
	rm -rf *o cli-ttt