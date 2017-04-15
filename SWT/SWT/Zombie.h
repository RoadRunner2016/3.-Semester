#pragma once

#include <iostream>
#include <random>
#include "Mechanic.h"
#include "Veganer.h"
#include "Position.h"

class Zombie
{

protected:

	// Attribute

	unsigned Zlebenspunkte;
	Position Zposition;
	int Zempfindlichkeit;

	// Komposition (Zeiger)
	
	/*
	Mechanic* Mstil;
	Veganer* Vstil;
	*/
public:



	enum Zempfindlichkeit{Tagaktiv, D�mmerungsaktiv, Nachtaktiv};

	// Konstruktor

	Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit);

	// Getter

	unsigned getLebenspunkte();

	Position getPosition();

	int getEmpfindlichkeit();

	// Setter

	void setLebenspunkte(unsigned Plebenspunkte);

	void setPosition(Position *Pposition);

	// Methoden

	virtual bool WaffeAbfeuern(Position *Pposition) = 0;

	bool Mattack();

	bool Vattack();

	// Standardkonstruktoren

	Zombie();
	~Zombie();


};

