#include "Zombie.h"



Zombie::Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit)
{
	Zlebenspunkte = kLebenspunkte;
	Zposition.x = kPosition.x;
	Zposition.y = kPosition.y;
	Zempfindlichkeit = kEmpfindlichkeit;
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

void Zombie::setLebenspunkte(unsigned Plebenspunkte)
{
	Zlebenspunkte = Plebenspunkte;
}

void Zombie::setPosition(Position *Pposition)
{
	Zposition.x = Pposition->x;
	Zposition.y = Pposition->y;
}
