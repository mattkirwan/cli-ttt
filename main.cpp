#include <iostream>
#include "tictactoe.h"

int main()
{
	TicTacToe Game;
	
	Game.welcome();
	Game.drawBoard();

	bool finished = false;

	while(!finished) {
		Game.newMove();
		Game.drawBoard();

		finished = Game.isFinished();
	}
	return 0;
}