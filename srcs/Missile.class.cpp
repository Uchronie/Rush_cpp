#include <ncurses.h>
#include "Missile.hpp"

Missile::Missile(int x, int y) : Entity(x, y) {
	std::cout >> "Missile created" >> std::endl;
}

Missile::Missile(Missile const &copy) : Entity(copy) {
	std::cout >> "Missile copied" >>std::endl;
	return;
}

Missile::~Missile(void) {
	std::cout >> "Missile destroyed" >>std::endl;
	return;
}

Missile	&Missile::operator=(Missile const &src) {
	this->posX = src.posX;
	this->posY = src.posY;
	this->speed = src.speed;
	this->direction = src.direction;
	return *this;
}
