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
	std::cout << "Choose row: \n";
	std::cin >> row;
	std::cout << "Choose col: \n";
	std::cin >> col;

	if (row == 1) {
		if (row + col == 2) {
			position[0] = current_player.current;
		}
		if (row < col) {
			position[row + col] = current_player.current;
		} else {
			position[row - col] = current_player.current;
		}
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