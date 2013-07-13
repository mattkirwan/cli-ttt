#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "player.h"

class TicTacToe
{
	private:
		
		unsigned short int position[9];
		unsigned short int player;
		unsigned short int total_turns;
	
	public:
		
		TicTacToe();
		void welcome() const;
		void drawBoard() const;
		bool isTie() const;
		void makeMove(Player &current_player);
		unsigned short int nextTurn(Player &current_player);
};

#endif