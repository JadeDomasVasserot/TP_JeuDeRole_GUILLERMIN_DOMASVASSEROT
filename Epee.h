#include "Arme.h"
#include <iostream>
#include <string>

#ifndef EPEE_H
#define EPEE_H

class Epee : public Arme
{
	//ATTRIBUTS
protected:
	double longueur;

	//Constructeurs
public:
	Epee();
	~Epee();
	Epee(std::string nomArme, int degats, double longueur);

	// Getter et setter

	double GetLongueur();
	void SetLongueur(double longueur);

	// Méthode 
	 void AfficherAttaque();
	 std::string GetNomArme();

};
#endif // !EPEE_H
