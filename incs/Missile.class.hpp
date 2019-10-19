#ifndef MISSILE_CLASS
# define MISSILE_CLASS

class Missile : public Entity {
public:
	Missile(int x, int y);
  	Missile(Missile const &copy);
	~Missile(void);

	Missile	&operator=(Missile const &src);
private:

};

#endif
