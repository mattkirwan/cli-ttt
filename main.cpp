#include <iostream>
#include "tictactoe.h"

int main()
{
	TicTacToe Game;
	
	Game.welcome();

	Game.drawBoard();

	int i = 0;
	
	do
	{
		if(i > 10)
		{
			break;
		}

		std::cout << "Loop\n";
		
		i++;
	}
	while( !Game.isTie() );

	return 0;
}