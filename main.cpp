#include <iostream>
#include "tictactoe.h"

int main()
{
	TicTacToe Game;
	
	Game.welcome();
	Game.drawBoard();
	
	do
	{
		Game.makeMove();
		Game.drawBoard();
		Game.nextTurn();
	}
	while( !Game.isTie() );

	return 0;
}