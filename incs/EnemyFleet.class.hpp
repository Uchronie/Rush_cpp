#ifndef ENEMY_FLEET_CLASS
# define ENEMY_FLEET_CLASS
# include "Enemy.class.hpp"
class EnemyFleet {
public:
	EnemyFleet(int size);
  	EnemyFleet(EnemyFleet const &copy);
	~EnemyFleet(void);

	EnemyFleet	&operator=(EnemyFleet const &src);

	Enemy *enemyFleet;
private:

};

#endif
