#include "Zombie.h"



Zombie::Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit)
{
	kLebenspunkte = 100;
	kPosition.x = 1;
	kPosition.y = 1;
	kEmpfindlichkeit = Tagaktiv;
}

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}
