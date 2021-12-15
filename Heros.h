
#include <iostream>
#include "Arme.h"
#include "Epee.h"
#include "EtreVivant.h"

#ifndef HEROS_H
#define HEROS_H
class Arme;
class Heros : public EtreVivant
{
	//attributs
protected:
	Arme* arme;

public:
	//constructeur
	Heros();
	~Heros();
	Heros(Arme* arme, std::string nom, int pointDeVie);

	//Getter et Setter
	Arme* GetArme();
	void SetArme(Arme* arme);
	//Méthode
	void Attaquer(EtreVivant* cible);
	void FaireDegat(EtreVivant* cible);
};

#endif