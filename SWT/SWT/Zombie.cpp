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

unsigned Zombie::getLebenspunkte()
{
	return this->Zlebenspunkte;
}

Position Zombie::getPosition()
{
	return this->Zposition;
}

int Zombie::getEmpfindlichkeit()
{
	return this->Zempfindlichkeit;
}
