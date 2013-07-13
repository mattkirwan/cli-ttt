#include <iostream>
#include "tictactoe.h"
#include "player.h"

int main()
{
	TicTacToe Game;
	Player CurrentPlayer;
	
	Game.welcome();
	Game.drawBoard();

	bool finished = false;

	while(!finished) {
		Game.newMove(CurrentPlayer);
		Game.drawBoard();

		CurrentPlayer.change();

		finished = Game.isFinished();
	}
	return 0;
}