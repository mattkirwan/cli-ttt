#include <iostream>
#include "tictactoe.h"

TicTacToe::TicTacToe()
{
	for(int i = 0; i < 9; i++)
	{
		position[i] = 0;
	}
}

void TicTacToe::welcome() const
{
	std::cout << "\n\n    Welcome to Tic Tac Toe!\n";
}

void TicTacToe::drawBoard() const
{
	std::cout << "          \n";
	std::cout << "          " << position[0] << "|" << position[1] << "|" << position[2];
	std::cout << "\n          -|-|-\n";
	std::cout << "          " << position[3] << "|" << position[4] << "|" << position[5];
	std::cout << "\n          -|-|-\n";
	std::cout << "          " << position[6] << "|" << position[7] << "|" << position[8];
	std::cout << "\n\n\n";
}

bool TicTacToe::isTie() const
{
	return false;
}