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

string Joueur::getNom() const {

	return nom;

}

Carte * Joueur::getCarte(int aIndex) {

	return mainDuJoueur[aIndex];

}

void Joueur::ajouterCarteDansMain(Carte * aCarte) {

	int position = 0;

	while (mainDuJoueur[position] != NULL) {

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