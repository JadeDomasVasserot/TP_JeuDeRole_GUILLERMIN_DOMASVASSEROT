#include "Heros.h"

Heros::Heros()
{
}

Heros::~Heros()
{
}

Heros::Heros(Arme* arme, std::string nom, int pointDeVie) : EtreVivant(nom, pointDeVie) {
	this->arme = arme;
	this->nom = nom;
	this->pointDeVie = pointDeVie;
}

Arme* Heros::GetArme()
{
	return arme;
}

void Heros::SetArme(Arme* arme)
{
	this->arme = arme;
}

void Heros::Attaquer(EtreVivant* cible) {
	EtreVivant::Attaquer(cible);
	arme->AfficherAttaque();
}

void Heros::FaireDegat(EtreVivant* cible)
{
	int degat = arme->GetDegats();
	cible->pointDeVie -= degat;
	std::cout << "La cible a maintenant " << cible->pointDeVie <<" pv " << std::endl;
}
