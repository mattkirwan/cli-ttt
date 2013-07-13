#ifndef TICTACTOE_H
#define TICTACTOE_H

const unsigned short int NUMBER_PLAYERS = 2;

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
		void makeMove();
		void nextTurn();
};

#endif