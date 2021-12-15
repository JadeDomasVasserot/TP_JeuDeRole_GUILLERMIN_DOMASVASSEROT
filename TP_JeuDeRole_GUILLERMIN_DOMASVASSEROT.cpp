#include <iostream>
#include <vector>
#include "Arme.h"
#include "Epee.h"
#include "EtreVivant.h"
#include "Gourdin.h"
#include "Heros.h"
#include "Monstre.h"

using namespace std;

int main()
{
	cout << "Bienvenue dans le jeu Hero VS Monstre ! \n Le but est de mettre les pv du Monstre a 0." << endl;
	cout << "Choissisez votre arme et rentrer votre nom de joueur" << endl;

	Arme* Epee1 = new Epee("MasterSword", 110, 75.3);
	Arme* Epee2 = new Epee("Katana", 120, 120.3);
	Arme* Epee3 = new Epee("Sabre", 105, 70.3);
	vector<Arme*> arme;
	arme.push_back(Epee1);
	arme.push_back(Epee2);
	arme.push_back(Epee3);

	Arme* Gourdin1 = new Gourdin("Masse", 105, 12.2);
	Arme* Gourdin2 = new Gourdin("Marteau", 95, 15.2);
	Arme* Gourdin3 = new Gourdin("Baton", 75, 6.2);
	
	arme.push_back(Gourdin1);
	arme.push_back(Gourdin2);
	arme.push_back(Gourdin3);
	
	//Exemple de 1 hero et 1 monstre
	Heros* Hero1 = new Heros(Epee1, "Hero1", 450);
	Monstre* Monstre1= new Monstre(Gourdin1, "MonstrePacome", 500);
	Monstre* Monstre2 = new Monstre(Gourdin2, "MonstreJade", 500);

	//Affichage des armes créées
	cout << "Les Armes ! " << endl;
	for (int i = 0; i < arme.size(); i++) {
		cout << i+1 << ". " << arme[i]->GetNomArme() << endl;
	}
	//Choix de l'arme
	
	cout << "Choissisez votre arme : rentrez le numero de l'arme!" << endl;
	int choix = 0;
	cin >> choix;
	while (choix<=0 || choix >=7) {
		cout << "Choissisez votre arme : rentrez le numero de l'arme!" << endl;
		cin >> choix;
	}
	cout << "Rentrez votre prenom" << endl;
	string prenom = "";
	cin >> prenom;
	Heros* Heros2 = new Heros(arme[choix - 1],  prenom, 450);
	cout << "\nNom :" << Heros2->GetNom()
		<< "\nArme :" <<
		Heros2->GetArme()->GetNomArme()
		<< "\nPosition : " <<
		Heros2->GetPositionX() 
		<< ";" << Heros2->GetPositionY() 
		<< "\nPDV : " << Heros2->GetPDV()<<endl;
	//test des méthodes demandés
	Hero1->SetPosition(10, 20);
	Monstre1->SetPosition(12, 22);
	Hero1->Attaquer(Monstre1);
	Monstre1->Attaquer(Hero1);

	//méthode faire des dégats en +
	Heros2->SetPosition(54, 78);
	Heros2->Attaquer(Monstre1);
	Heros2->FaireDegat(Monstre1);
	Monstre1->Attaquer(Heros2);
	Monstre1->FaireDegat(Heros2);

}