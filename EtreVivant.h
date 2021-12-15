#include <iostream>

#ifndef ETREVIVANT_H
#define ETREVIVANT_H
class Arme;
class EtreVivant
{
	// Attributs
public:
	int positionX;
	int positionY;
	std::string nom;
	int pointDeVie;
	
public:
	//Constructeur

	EtreVivant();
	~EtreVivant();
	EtreVivant(std::string nom, int pdv);

	//Getter et setter

	std::string GetNom();
	int GetPDV();
	int GetPositionX();
	int GetPositionY();

	void SetPDV(int pdv);
	void SetNom(std::string nom);
	void SetPosition(int pX, int pY);

	//Méthodes

	virtual void Attaquer(EtreVivant* cible);
	virtual void RecevoirDegats(EtreVivant* source);
	

};

#endif