#include <ncurses.h>
#include "Game.class.hpp"

Game::Game() {
	std::cout << "Game created" << std::endl;
	this->player = new Player(1, 1);
	this->enemyFleet = new EnemyFleet(3);
}

Game::Game(Game const &copy) : Entity(copy) {
	std::cout << "Game copied" << std::endl;
	return;
}

Game::~Game(void) {
	std::cout << "Game destroyed" << std::endl;
	return;
}

Game	&Game::operator=(Game const &src) {
	this->player = src.player;
	this->fleet = src.fleet;
	this->missiles = src.missiles;
	return *this;
}

int		Game::update() {
	return 0;
}

void	Game::AddMissile(Missile *newMissile) {
	if (newMissile == NULL)
		return;
	for (int n = 0; n != 100; n++) {
		if (this->missiles[n] == NULL) {
			this->missiles[n] = newMissile;
			std::cout << "Missile added." << std::endl;
			return;
		}
	}
	std::cout << "Too much missiles." << std::endl;
}

void	Game::RemoveMissile(Missile *destroyedMissile) {
	if (destroyedMissile == NULL)
		return;
	for (int n = 0; n != 100; n++) {
		if (this->missiles[n] == destroyedMissile) {
			this->missiles[n] = NULL;
			delete *destroyedMissile;
			std::cout << "Missile removed." << std::endl;
			return;
		}
	}
}
