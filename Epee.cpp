#include "Epee.h"


using namespace std;

Epee::Epee()
{
}

Epee::~Epee()
{
}
Epee::Epee(std::string nomArme, int degats, double longueur) : Arme(nomArme, degats)
{
	this->longueur = longueur;
}
double Epee::GetLongueur() {
	return longueur;
}
void Epee::SetLongueur(double longueur) {
	this->longueur = longueur;
}

void Epee::AfficherAttaque() {
	cout << "Attaque epee ! " << endl;
	Arme::AfficherAttaque();
	cout << "La longueur de l'epee est de : " << longueur << " cm " << endl;

}
std::string Epee::GetNomArme() {
	return Arme::GetNomArme()+" //Epee d'environs " + to_string((int)longueur) +" cm";
}