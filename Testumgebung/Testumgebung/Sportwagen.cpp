#include "Sportwagen.h"



void Sportwagen::fBewegen()
{
	std::cout << "Sportwagen bewegt sich!" << std::endl;
}




Sportwagen::Sportwagen(char* kName, unsigned kLeistung, unsigned KswWindwiderstand):Fahrzeug(kName, kLeistung)
{
	fName = kName;
	fLeistung = kLeistung;
	swWindwiderstand = KswWindwiderstand;
}

Sportwagen::Sportwagen()
{
	std::cout << "Standardkonstruktor Sportwagen" << std::endl;
}


Sportwagen::~Sportwagen()
{
}
