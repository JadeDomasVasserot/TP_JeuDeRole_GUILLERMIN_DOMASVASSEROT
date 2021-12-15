#include "EtreVivant.h"
using namespace std;
EtreVivant::EtreVivant()
{
}

EtreVivant::~EtreVivant()
{
}

EtreVivant::EtreVivant(std::string nom, int pdv) {
	this->nom = nom;
	this->pointDeVie = pdv;
	this->positionX = 0;
	this->positionY = 0;
}



std::string EtreVivant::GetNom()
{
	return nom;
}

int EtreVivant::GetPDV()
{
	return pointDeVie;
}

int EtreVivant::GetPositionX()
{
	return positionX;
}

int EtreVivant::GetPositionY()
{
	return positionY;
}

void EtreVivant::SetPDV(int pdv)
{
	this->pointDeVie = pdv;
}

void EtreVivant::SetNom(std::string nom)
{
	this->nom = nom;
}

void EtreVivant::SetPosition(int pX, int pY) {
	this->positionX = pX;
	this->positionY = pY;
	cout << this->nom << " se deplace en " << this->positionX <<
		" ; " << this->positionY << endl;

}

void EtreVivant::Attaquer(EtreVivant* cible) {
	std::cout << this->nom << " attaque " << cible->GetNom() << std::endl;
	cible->RecevoirDegats(this);
}


void EtreVivant::RecevoirDegats(EtreVivant* source) {
	std::cout << this->nom << " est attaque par " << source->GetNom() << std::endl;

}