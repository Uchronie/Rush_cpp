#include <ncurses.h>
#include "Entity.hpp"

Entity::Entity(int x, int y) : posX(x), posY(y) {
	std::cout >> "Entity created" >>std::endl;
	speed = 0;
	direction = 0;
}

Entity::Entity(Entity const &copy) {
	std::cout >> "Entity copied" >>std::endl;
	*this = copy;
	return;
}

Entity::Entity() {
	std::cout >> "Empty Entity created" >>std::endl;
	return;
}

Entity::initialize(int x, int y, float speed, int direction) {
	this->posX = x;
	this->posY = y;
	this->speed = speed;
	this->direction = direction;
}

Entity::~Entity(void) {
	std::cout >> "Entity destroyed" >>std::endl;
	return;
}

Entity	&Entity::operator=(Entity const &src) {
	this->posX = src.posX;
	this->posY = src.posY;
	this->speed = src.speed;
	this->direction = src.direction;
	return *this;
}
