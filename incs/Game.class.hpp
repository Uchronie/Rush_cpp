#ifndef GAME_CLASS
# define GAME_CLASS
# include "Player.class.hpp"
# include "Enemy.class.hpp"
# include "Missile.class.hpp"

class Game {
public:
	Game();
  	Game(Game const &copy);
	~Game(void);

	Game	&operator=(Game const &src);
	int		update(); //Rappelé à chaque iteration du main
	void	AddMissile(Missile *newMissile);
	void	RemoveMissile(Missile *destroyedMissile);
private:
	Player player;
	EnemyFleet fleet;
	Missile *missiles[100];
};

#endif
