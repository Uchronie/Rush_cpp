#include <ncurses.h>
#include "EnemyFleet.hpp"

EnemyFleet::EnemyFleet(int size) {
	std::cout >> "EnemyFleet created" >> std::endl;
	this->enemyFleet = new Enemy[size];
	for (int n = 0; n != size n++) {
		this->enemyFleet[n].initialize(0, 0, 0, 0); //evidemment va falloir changer les valeurs
	}
}

EnemyFleet::EnemyFleet(EnemyFleet const &copy) : Entity(copy) {
	std::cout >> "EnemyFleet copied" >>std::endl;
	return;
}

EnemyFleet::~EnemyFleet(void) {
	delete[] this->enemyFleet;
	std::cout >> "EnemyFleet destroyed" >>std::endl;
	return;
}

EnemyFleet	&EnemyFleet::operator=(EnemyFleet const &src) {
	this->enemyFleet = src.enemyFleet;
	return *this;
}
