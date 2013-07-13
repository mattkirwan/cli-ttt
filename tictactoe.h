#ifndef TICTACTOE_H
#define TICTACTOE_H
#include "player.h"

class TicTacToe
{
	private:
		int position[9];
	public:
		TicTacToe();
		void welcome() const;
		void drawBoard() const;
		void newMove(Player current);
		bool isFinished() const;
		bool isTie() const;
};

#endif