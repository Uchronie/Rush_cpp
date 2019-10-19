#include <ncurses.h>
#include "Player.class.hpp"

Player::Player(int x, int y) : Entity(x, y) {
	std::cout << "Player created" << std::endl;
}

Player::Player(Player const &copy) : Entity(copy) {
	std::cout << "Player copied" << std::endl;
	return;
}

Player::~Player(void) {
	std::cout << "Player destroyed" << std::endl;
	return;
}

Player	&Player::operator=(Player const &src) {
	this->posX = src.posX;
	this->posY = src.posY;
	this->speed = src.speed;
	this->direction = src.direction;
	return *this;
}
