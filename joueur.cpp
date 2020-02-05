#include "joueur.h"

Joueur::Joueur() {

	nom = "";
	nombreVictoires = 0;
	nombreDefaites = 0;
	
	for (int i = 0; i < 26; i++) {

		mainDuJoueur[i] = NULL;

	}

}

Joueur::Joueur(string aNom, int aNombreVictoires, int aNombreDefaites) {

	nom = aNom;
	nombreVictoires = aNombreVictoires;
	nombreDefaites = aNombreDefaites;

	for (int i = 0; i < 26; i++) {

		mainDuJoueur[i] = NULL;

	}

}

void Joueur::setNom(string aNom) {

	if (aNom != "") {

		nom = aNom;

	}

}