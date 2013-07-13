#include <iostream>
#include "player.h"

Player::Player()
{
	current = 1;
}

void Player::change()
{
	if (current == 1) {
		current = 2;
	} else {
		current = 1;
	}
}