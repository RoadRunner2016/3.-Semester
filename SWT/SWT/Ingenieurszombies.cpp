#include "Ingenieurszombies.h"




bool Ingenieurszombies::WaffeAbfeuern(Position * Pposition)
{
	int Zwürfel = 0;

	std::cout << this->Zlebenspunkte << std::endl;

	if (this->Zlebenspunkte > 50)
	{
		Zwürfel = rand() % 10 + 1;
		std::cout << " Ergebnis des Wurfs: " << Zwürfel << std::endl;
		if (Zwürfel > 5)
		{
			// 6 - 10 ist Treffer
			std::cout << "Treffer! \n" << std::endl;
			return true;
		}
	}
	else
	{
		Zwürfel = rand() % 10 + 1;
		std::cout << " Ergebnis des Wurfs: " << Zwürfel << std::endl;
		if (Zwürfel > 9)
		{
			std::cout << " Treffer! Bei dem 10% Wurf \n" << std::endl;
		}
	}

		std::cout << " Daneben \n " << std::endl;
		
		return false;
}

Ingenieurszombies::Ingenieurszombies(unsigned Klebenspunkte, Position Kposition, int Kempfindlichkeit)
{

	this->Zlebenspunkte = Klebenspunkte;
	this->Zposition = Kposition;
	this->Zempfindlichkeit = Kempfindlichkeit;
}

Ingenieurszombies::Ingenieurszombies()
{
}


Ingenieurszombies::~Ingenieurszombies()
{
}
