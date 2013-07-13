#include <iostream>
#include "tictactoe.h"

TicTacToe::TicTacToe()
{
	player = 1;
	total_turns = 0;

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
	if(total_turns == 9)
	{
		return 1;
	}

	return 0;
}

void TicTacToe::makeMove()
{
	std::cout << "Make your move player " << player << ":";

	int player_move;

	do
	{
		std::cin >> player_move;
		player_move--;
	}
	while(player_move < 0 || player_move > 8 || position[player_move] != 0);

	position[player_move] = player;
}

void TicTacToe::nextTurn()
{
	total_turns++;

	if(++player > NUMBER_PLAYERS)
	{
		player = 1;
	}
}