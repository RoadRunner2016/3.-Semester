#include "Mechanic.h"

bool Mechanic::Mattack()
{
	std::cout << " Rasenmaeher ist aktiv, Chef ! " << std::endl;
	return true;
}

Mechanic::Mechanic()
{
	std::cout << " Mechanicer erstellt! " << std::endl;
}


Mechanic::~Mechanic()
{
}
