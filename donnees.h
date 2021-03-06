#pragma once
#include "carte.h"
#include "joueur.h"

const int maxCartes = 52;

class Donnees
{

private:

	Carte paquetDeCarte[maxCartes];
	Joueur * joueur1;
	Joueur * joueur2;

public:

	Donnees();
	void melangerPaquetDeCarte();
	void setJoueur(int aNumeroJoueur, Joueur* aJoueur);
	Joueur * getJoueur(int aNumeroJoueur);
	Carte* getCarte(int aIndex);

};

