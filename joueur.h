#include <string>
#include "carte.h"
using namespace std;

#ifndef JoueurH
#define JoueurH

const int maxCartesAJouer = 26;
class Joueur
{
private:

	string nom;
	int nombreVictoires;
	int nombreDefaites;
	Carte* mainDuJoueur[26];

public:

	/* Constructeurs */
	Joueur();
	Joueur(string aNom, int aNombreVictoires, int aNombreDefaites);

	/* Methodes */
	void setNom(string aNom);
	string getNom() const;
	void ajouterCarteDansMain(Carte * aCarte);
	void supprimerMainDuJoueur(Joueur * aJoueur);
};
#endif