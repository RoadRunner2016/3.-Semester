#pragma once
#include "Zombie.h"
#include <random>


class Ingenieurszombies : public Zombie
{

public:

	Position Test;

Ingenieurszombies(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit);

	bool WaffeAbfeuern(Position *Pposition);

	Ingenieurszombies();
	~Ingenieurszombies();
};

