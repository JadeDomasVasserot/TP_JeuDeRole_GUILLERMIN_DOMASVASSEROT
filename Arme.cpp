#include "Arme.h"

using namespace std;

Arme::Arme()
{
}

Arme::~Arme()
{
}

Arme::Arme(std::string nomArme, int degats)
{
	this->nomArme = nomArme;
	this->degats = degats;
}

std::string Arme::GetNomArme()
{
	return nomArme;
}

int Arme::GetDegats()
{
	return degats;
}

void Arme::SetNomArme(std::string nomArme)
{
	this->nomArme = nomArme;
}

void Arme::SetDegats(int degats)
{
	this->degats = degats;
}

void Arme::AfficherAttaque()
{
	cout << "L'arme : " << nomArme << " fait " << degats << " points de degats." << endl;
}



