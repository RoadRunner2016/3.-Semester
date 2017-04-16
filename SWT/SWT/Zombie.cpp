#include "Zombie.h"
#include "Position.h"




Zombie::Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit)
{
	std::cout << " Erweiterter Zombiekonstruktor gestartet!" << std::endl;

	Zlebenspunkte = kLebenspunkte;
	Zposition.x = kPosition.x;
	Zposition.y = kPosition.y;
	Zempfindlichkeit = kEmpfindlichkeit;

	// Beim erzeugen eines Zombies wird der Konstruktor einer Rolle fragen
	/*
	int Rauswahl = 0;
	while (Rauswahl != 1 && Rauswahl != 2 && Rauswahl != 3)
	{
		std::cout << " Optionen: \n 1. Mechaniker \n 2. Veganer \n 3. Beide \n " << std::endl;
		std::cin >> Rauswahl;
		std::cout << std::endl;

		switch (Rauswahl)
		{
		case 1:
			
			Mstil = new Mechanic;
			Vstil = NULL;

			break;
		case 2:

			Vstil = new Veganer;
			Mstil = NULL;

			break;
		case 3:

			Mstil = new Mechanic;
			Vstil = new Veganer;

			break;
		default:

			std::cout << " Falsche Eingabe! " << std::endl;
			break;
		}
	}

	std::cout << " Erweiterter Zombiekonstruktor beendet" << std::endl;
	*/
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

bool Zombie::Mattack()
{
	this->Mstil->Mattack();
	return true;
}

bool Zombie::Vattack()
{
	this->Vstil->Vattack();
	return true;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
