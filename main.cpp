#include <iostream>
#include "tictactoe.h"
#include "player.h"

int main()
{
	TicTacToe Game;
	Player Player;

	Game.welcome();
	Game.drawBoard();
	
	do
	{
		Game.makeMove(Player);
		Game.drawBoard();
		Game.nextTurn(Player);
	}
	while( !Game.isTie() );

	return 0;
}