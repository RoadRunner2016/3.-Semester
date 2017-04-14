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

	// Getter

	unsigned getLebenspunkte();

	Position getPosition();

	int getEmpfindlichkeit();

	// Setter

	void setLebenspunkte(unsigned Plebenspunkte);

	void setPosition(Position *Pposition);

};

