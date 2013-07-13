#include <iostream>
#include "tictactoe.h"
#include "player.h"

int main()
{
	TicTacToe Game;
	Player CurrentPlayer;
	
	Game.drawBoard();

	do
	{
		Game.makeMove(CurrentPlayer);
		Game.drawBoard();
		Game.nextTurn(CurrentPlayer);
	}
	while( !Game.isTie() );

	return 0;
}