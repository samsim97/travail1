#include "donnees.h"
#include "..\screen\screen.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

Donnees leJeu;

void InitialiserJoueurs(Joueur * aJoueur1, Joueur * aJoueur2);
void Jouer();
void donnerLesCartesAuxJoueurs(int aNombreCartesParJoueur);
void afficherLesCartesEtJoueur();

int main() 
{
	srand(time(NULL));

	Joueur premierJoueur, deuxiemeJoueur;

	char fini = 'n';
	srand((unsigned)time(NULL));
	InitialiserJoueurs(&premierJoueur, &deuxiemeJoueur);
	while (fini=='n' || fini=='N')
	{
		Jouer();
		cout << "\nTermine (n/o) ? ";
		cin >> fini;
	}
}

void Jouer() 
{
	int nombreCarteParJoueur = 0;

	cout << "\nCombien de cartes chque joueur recevra? (max de 26 par joueur) ";
	cin >> nombreCarteParJoueur;

	if (nombreCarteParJoueur <= 0 && nombreCarteParJoueur > 26) {

		cout << "Le nombre de cartes doit etre plus grand que 0 et plus petit ou egal a 26";
		Jouer();

	}

	leJeu.melangerPaquetDeCarte();
	donnerLesCartesAuxJoueurs(nombreCarteParJoueur);
	afficherLesCartesEtJoueur();

}

void InitialiserJoueurs(Joueur * aJoueur1, Joueur * aJoueur2)
{
	string nomJoueur1, nomJoueur2 = "";

	cout << "\nNom du premier joueur: ";
	cin >> nomJoueur1;
	cout << "\nNom du deuxieme joueur: ";
	cin >> nomJoueur2;

	aJoueur1->setNom(nomJoueur1);
	aJoueur2->setNom(nomJoueur2);

	leJeu.setJoueur(1, aJoueur1);
	leJeu.setJoueur(2, aJoueur2);

}

void donnerLesCartesAuxJoueurs(int aNombreCartesParJoueur) {

	for (unsigned int i = 1; i <= 2; i++) {

		for (unsigned int j = 0; j < aNombreCartesParJoueur; j++) {

			if (i == 1) {

				leJeu.getJoueur(i)->ajouterCarteDansMain(leJeu.getCarte(j));

			}
			else {

				leJeu.getJoueur(i)->ajouterCarteDansMain(leJeu.getCarte(j + aNombreCartesParJoueur));

			}
		}
	}
}

void afficherLesCartesEtJoueur() {

	ClrScr();

	cout << "     " << leJeu.getJoueur(1)->getNom() << "                " << leJeu.getJoueur(2)->getNom();

	unsigned int noJoueur = 1;
	unsigned int i = 0;

	while (leJeu.getJoueur(noJoueur)->getCarte(i) != NULL) {

		leJeu.getJoueur(noJoueur)->getCarte(i)->Afficher(5, (i + 2));
		i++;

	}
	noJoueur++;
	i = 0;

	while (leJeu.getJoueur(noJoueur)->getCarte(i) != NULL) {

		leJeu.getJoueur(noJoueur)->getCarte(i)->Afficher(25, (i + 2));
		i++;

	}
	cout << endl;
}
