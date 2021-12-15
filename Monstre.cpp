#include "Monstre.h"

Monstre::Monstre()
{
}

Monstre::~Monstre()
{
}

Monstre::Monstre(Arme* arme, std::string nom, int pointDeVie) : EtreVivant(nom, pointDeVie) {
	this->arme = arme;
	this->nom = nom;
	this->pointDeVie = pointDeVie;
}

Arme* Monstre::GetArme()
{
	return arme;
}

void Monstre::SetArme(Arme* arme)
{
	this->arme = arme;
}

void Monstre::Attaquer(EtreVivant* cible) {
	EtreVivant::Attaquer(cible);
	arme->AfficherAttaque();
}

void Monstre::RecevoirDegats(EtreVivant* source)
{
	std::cout << this->nom << " est attaque par " << source->GetNom() << std::endl;
	
}

void Monstre::FaireDegat(EtreVivant* cible)
{
	int degat = arme->GetDegats();

	cible->pointDeVie -= degat;
	std::cout <<"La cible a maintenant " <<cible->pointDeVie << " pv " <<std::endl;
}

