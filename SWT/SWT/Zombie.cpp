#include "Zombie.h"
#include "Position.h"

Mechanic* Mstil;
Veganer* Vstil;

Zombie::Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit)
{
	Zlebenspunkte = kLebenspunkte;
	Zposition.x = kPosition.x;
	Zposition.y = kPosition.y;
	Zempfindlichkeit = kEmpfindlichkeit;

	// Beim erzeugen eines Zombies wird der Konstruktor einer Rolle fragen

	int Rauswahl = 0;
	while (Rauswahl != 1 || Rauswahl != 2 || Rauswahl != 3)
	{
		std::cout << " Optionen: \n 1. Mechaniker \n 2. Veganer \n 3. Beide \n " << std::endl;
		std::cin >> Rauswahl;
		std::cout << std::endl;

		switch (Rauswahl)
		{
		case 1:
			
			Mstil = new Mechanic;

			break;
		case 2:

			Vstil = new Veganer;

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
	Mstil->Mattack();
	return true;
}

bool Zombie::Vattack()
{
	Vstil->Vattack();
	return true;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
