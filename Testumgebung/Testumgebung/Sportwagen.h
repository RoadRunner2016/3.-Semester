#pragma once
#include "Fahrzeug.h"
class Sportwagen :
	public Fahrzeug
{
public:

	void fBewegen();

	unsigned swWindwiderstand;

	Sportwagen(char* kName, unsigned kLeistung, unsigned KswWindwiderstand);

	Sportwagen();
	~Sportwagen();
};

