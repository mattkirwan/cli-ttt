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

void TicTacToe::newMove(Player current_player)
{
	int row;
	int col;
	std::cout << "Player " << current_player.current << " is up!\n";
	std::cout << "Choose col (1, 2 or 3): \n";
	std::cin >> col;
	std::cout << "Choose row (1, 2 or 3): \n";
	std::cin >> row;

	/*
		This is the logic I came up with to map our array
		with row / column positions, it leaves us with
		3 if statements. Not sure if it's tidy enough. It
		works well though.
		
		C R
		1,1 = 0		a - b
		1,2 = 3 	a + b
		1,3 = 6 	(a + b) + (b - a) + a - 1

		2,1 = 1 	a - b
		2,2 = 4 	a + b
		2,3 = 7 	(a + b) + (b - a) + a - 1

		3,1 = 2 	a - b
		3,2 = 5 	a + b
		3,3 = 8 	(a + b) + (b - a) + a - 1
	*/
	if (row == 1) {
		position[col - row] = current_player.current;
	}

	if (row == 2) {
		position[col + row] = current_player.current;
	}

	if (row == 3) {
		int p = ((col + row) + (row - col)) + col - 1;
		position[p] = current_player.current;
	}
}

bool TicTacToe::isFinished() const
{
	for(int i = 0; i < 9; i++) {
		if (position[i] == 0) {
			return false;
		}
	}
	return true;
}

bool TicTacToe::isTie() const
{
	return false;
}