#include "Gourdin.h"

using namespace std;

Gourdin::Gourdin()
{
}

Gourdin::~Gourdin()
{
}

Gourdin::Gourdin(std::string nomArme, int degats, double poids) : Arme(nomArme, degats)
{
	this->poids = poids;
}

double Gourdin::GetPoids()
{
	return poids;
}

void Gourdin::SetDegats(double poids)
{
	this->poids = poids;
}

void Gourdin::AfficherAttaque()
{
	cout << "Attaque gourdin ! " << endl;
	Arme::AfficherAttaque();
	cout << "Le poids du gourdin est de : " << poids << " kg " << endl;
}
std::string Gourdin::GetNomArme() {
	return Arme::GetNomArme() + " //Gourdin d'environs " + to_string((int)poids) + " kilos";
}