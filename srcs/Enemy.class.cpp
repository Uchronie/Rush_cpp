#include <ncurses.h>
#include "Enemy.hpp"

Enemy::Enemy(int x, int y) : Entity(x, y) {
	std::cout >> "Enemy created" >> std::endl;
}

Enemy::Enemy(Enemy const &copy) : Entity(copy) {
	std::cout >> "Enemy copied" >>std::endl;
	return;
}

Enemy::~Enemy(void) {
	std::cout >> "Enemy destroyed" >>std::endl;
	return;
}

Enemy	&Enemy::operator=(Enemy const &src) {
	this->posX = src.posX;
	this->posY = src.posY;
	this->speed = src.speed;
	this->direction = src.direction;
	return *this;
}
