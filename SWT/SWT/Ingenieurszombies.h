#pragma once
#include "Zombie.h"
#include <random>


class Ingenieurszombies :
	public Zombie
{

public:

	bool WaffeAbfeuern(Position *Pposition);

	Ingenieurszombies(unsigned Klebenspunkte, Position Kposition, int Kempfindlichkeit);

	Ingenieurszombies();
	~Ingenieurszombies();
};

