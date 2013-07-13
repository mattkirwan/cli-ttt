#ifndef PLAYER_H
#define PLAYER_H

const unsigned short int NUMBER_PLAYERS = 2;

class Player
{
	public:
		unsigned short int player_id;
		Player();
		unsigned short int changePlayer();
};

#endif