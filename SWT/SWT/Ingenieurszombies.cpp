#include "Ingenieurszombies.h"




bool Ingenieurszombies::WaffeAbfeuern(Position * Pposition)
{
	int Zw�rfel = 0;

	std::cout << this->Zlebenspunkte << std::endl;

	if (this->Zlebenspunkte > 50)
	{
		Zw�rfel = rand() % 10 + 1;
		std::cout << " Ergebnis des Wurfs: " << Zw�rfel << std::endl;
		if (Zw�rfel > 5)
		{
			// 6 - 10 ist Treffer
			std::cout << "Treffer! \n" << std::endl;
			return true;
		}
	}
	else
	{
		Zw�rfel = rand() % 10 + 1;
		std::cout << " Ergebnis des Wurfs: " << Zw�rfel << std::endl;
		if (Zw�rfel > 9)
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
