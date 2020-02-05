#include "donnees.h"

Donnees::Donnees() {

	joueur1.setNom("");
	joueur2.setNom("");

	string atout[4] = {"pique","coeur","trefle","carreau"};

	int positionTableau = 0;

	for (unsigned int i = 0; i < 4; i++) {

		for (unsigned int j = 0; j < 13; j++) {

			paquetDeCarte[positionTableau].InitialiserCarte(j + 1, atout[i]);

		}

	}

}

void Donnees::melangerPaquetDeCarte() {

	Carte lCarteTemporaire;

	for (unsigned int i = 0; i < 100; i++) {

		int premierePosition = rand() % 51;
		int deuxiemePosition = rand() % 51;

		while (premierePosition == deuxiemePosition) {

			deuxiemePosition = rand() % 51;

		}

		lCarteTemporaire = paquetDeCarte[premierePosition];
		paquetDeCarte[premierePosition] = paquetDeCarte[deuxiemePosition];
		paquetDeCarte[deuxiemePosition] = lCarteTemporaire;

	}

}