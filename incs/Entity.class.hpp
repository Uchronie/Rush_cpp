#ifndef ENTITY_CLASS
# define ENTITY_CLASS

class Entity {
public:
	Entity(int x, int y);
	Entity();
  	Entity(Entity const &copy);
	~Entity(void);

	Entity	&operator=(Entity const &src);

	initialize(int x, int y, float speed, int direction);


protected:
	bool isAlly;
	//Object position on the grid
	int posX;
	int posY;
	//Object deplacement
	float speed;
	int direction; //type à definir
};

#endif
