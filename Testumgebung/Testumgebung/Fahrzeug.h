#pragma once
#include <iostream>


class Fahrzeug
{
public:

	char* fName;
	unsigned fLeistung;

	virtual void fBewegen() = 0;

	Fahrzeug(char* kName, unsigned kLeistung);

	Fahrzeug();
	~Fahrzeug();
};

