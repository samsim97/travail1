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

}
