#ifndef PLAYER_CLASS
# define PLAYER_CLASS

class Player : public Entity {
public:
	Player(int x, int y);
  	Player(Player const &copy);
	~Player(void);

	Player	&operator=(Player const &src);
private:

};

#endif
