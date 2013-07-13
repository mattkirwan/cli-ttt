#include <iostream>
#include "tictactoe.h"

TicTacToe::TicTacToe()
{
	test_property = 13;
	std::cout << test_property;
}

void TicTacToe::welcome()
{
	std::cout << "Welcome to Tic Tac Toe!\n";
}