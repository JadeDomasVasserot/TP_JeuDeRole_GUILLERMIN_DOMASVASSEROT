#include <iostream>
#include <string>
#include "Arme.h"
#include <math.h>
#include <stdio.h>
#ifndef GOURDIN_H	
#define GOURDIN_H
class Gourdin : public Arme
{
	//ATTRIBUTS
protected:
	double poids;

	//Constructeurs
public:
	Gourdin();
	~Gourdin();
	Gourdin(std::string nomArme, int degats, double poids);

	// Getter et setter
	double GetPoids();

	void SetDegats(double poids);

	// Méthode 
	 void AfficherAttaque();
	 std::string GetNomArme();
};
#endif // !GOURDIN_H
