#include "Zombie.h"
#include "Ingenieurszombies.h"

int main()
{

Position Test;
Test.x = 1;
Test.y = 2;

Ingenieurszombies Klaus(50, Test,Zombie::Tagaktiv);


	unsigned Mauswahl = 0;

	while (Mauswahl != 3)
	{

		std::cout << " Optionen: \n 1. Zufallswurf testen \n 2. Zweiter Test \n 3. Exit \n" << std::endl;
		std::cin >> Mauswahl;
		std::cout << std::endl;

		switch (Mauswahl)
		{
		case 1:

			Klaus.WaffeAbfeuern(&Test);

			break;

		case 2:

			Klaus.Mattack();
			Klaus.Vattack();

			break;
		case 3:

			std::cout << " Programm beendet " << std::endl;
			break;
		default:

			std::cout << " Eingabe falsch " << std::endl;
			break;
		}
	}


	system("pause");


	return 0;
}