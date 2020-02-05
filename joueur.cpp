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

void Joueur::ajouterCarteDansMain(Carte * aCarte, Joueur * aJoueur) {

	int position = 0;

	while ((mainDuJoueur[position] == NULL) && (position < 26)) {

		position++;

	}

	mainDuJoueur[position] = aCarte;

}

void Joueur::supprimerMainDuJoueur(Joueur * aJoueur) {

	int position = 0;

	while (mainDuJoueur[position] != NULL) {

		mainDuJoueur[position] = NULL;
		position++;

	}

}