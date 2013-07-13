#include <iostream>
#include "tictactoe.h"
#include "player.h"

int main()
{
	TicTacToe Game;
	Player Player;

	Player.current = 1;
	
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