#pragma once

struct Position
{
	int x;
	int y;
};

class Zombie
{

private:

	// Attribute

	unsigned Zlebenspunkte;
	Position Zposition;
	int Zempfindlichkeit;

public:

	enum Zempfindlichkeit{Tagaktiv, Dämmerungsaktiv, Nachtaktiv};

	// Konstruktor

	Zombie(unsigned kLebenspunkte, Position kPosition, int kEmpfindlichkeit);

	// Standardkonstruktor

	Zombie();
	~Zombie();

	// Getter/Setter


};

