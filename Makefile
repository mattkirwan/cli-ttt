all: cli-ttt

cli-ttt: main.o tictactoe.o player.o
		g++ main.o tictactoe.o player.o -o cli-ttt
main.o: main.cpp
		g++ -c main.cpp

tictactoe.o: tictactoe.cpp
		g++ -c tictactoe.cpp

player.o: player.cpp
		g++ -c player.cpp

clean:
	rm -rf *o cli-ttt