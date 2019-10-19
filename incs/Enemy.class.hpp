#ifndef ENEMY_CLASS
# define ENEMY_CLASS

class Enemy : public Entity {
public:
	Enemy(int x, int y);
  	Enemy(Enemy const &copy);
	~Enemy(void);

	Enemy	&operator=(Enemy const &src);
private:

};

#endif
