#include <iostream>
#include "Arme.h"
#include "EtreVivant.h"

#ifndef MONSTRE_H
#define MONSTRE_H
class Arme;
class Monstre : public EtreVivant
{
protected:
	//Attributs
	Arme* arme;

public:
	//Constructeurs
	Monstre();
	~Monstre();
	Monstre(Arme* arme, std::string nom, int pointDeVie);

	//Getter et Setter
	Arme* GetArme();
	void SetArme(Arme* arme);

	//Méthodes
	void Attaquer(EtreVivant* cible);
	void RecevoirDegats(EtreVivant* source);
	void FaireDegat( EtreVivant* cible);
	

};

#endif

