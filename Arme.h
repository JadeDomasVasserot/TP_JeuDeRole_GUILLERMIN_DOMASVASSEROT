#include <iostream>
#ifndef ARME_H	
#define ARME_H

class Arme
{
	//ATTRIBUTS
protected:
	std::string nomArme;
	int degats;

	//Constructeurs
public:
	Arme();
	~Arme();
	Arme(std::string nomArme, int degats);

	// Getter et setter
	virtual std::string GetNomArme();
	int GetDegats();

	void SetNomArme(std::string nomArme);
	void SetDegats(int degats);

	// Méthode 
	virtual void AfficherAttaque();

};
#endif // !ARME_H
