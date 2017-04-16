#include "Fahrzeug.h"


// Erweiterter VK Konstruktor

Fahrzeug::Fahrzeug(char* kName, unsigned kLeistung)
{
	std::cout << "Erweiterter Konstruktor Fahrzeug" << std::endl;

	this->fName = kName;
	this->fLeistung = kLeistung;
}

Fahrzeug::Fahrzeug()
{
	std::cout << "Standardkonstruktor Fahrzeug" << std::endl;
}


Fahrzeug::~Fahrzeug()
{
}
