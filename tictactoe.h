#ifndef TICTACTOE_H
#define TICTACTOE_H

#define NUMBER_PLAYERS 2

class TicTacToe
{
	private:
		int position[9];
		int player;
	public:
		TicTacToe();
		void welcome() const;
		void drawBoard() const;
		bool isTie() const;
		void takeTurn() const;
};

#endif