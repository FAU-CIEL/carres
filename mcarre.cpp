#include <iostream>
#include<stdio.h>
#include "carre.h"

using namespace std;

void main()
{
	CCarre carre[4];
	int decalage_horizontale;
	int decalage_verticale;
	int longueur_cote;
	char direction;
	int saut;
	int dx;
	int dy;

	CCarre *carre4 = new CCarre;
	decalage_horizontale = 0;
	decalage_verticale = 0;
	longueur_cote = 0;
	saut = 0;
	dx = 0;
	dy = 0;
	carre[0];
	carre[1];
	carre[2];
	carre[3];

	cout << "Entrez la valeur du decalage horizontale : ";
	cin >> decalage_horizontale;
	cout << "Entrez la valeur du decalage verticale : ";
	cin >> decalage_verticale;
	cout << "Entrez la longueur du cote d'un carre : ";
	cin >> longueur_cote;
	cout << "Entrez la direction du carre (n/s/e/o) : ";
	cin >> direction;
	cout << "Entrez la longueur du saut : ";
	cin >> saut;
	cout << "Entrez la premiere coordonner du vecteur : ";
	cin >> dx;
	cout << "Entrez la deuxieme coordonner du vecteur : ";
	cin >> dy;

	carre[0].Setcote(longueur_cote);
	carre[1].Setcote(longueur_cote);
	carre[2].Setcote(longueur_cote);
	carre[3].Setcote(longueur_cote);
	carre4->Setcote(longueur_cote);
	
	carre[0].Setsx(decalage_horizontale);
	carre[0].Setsy(decalage_verticale);
	carre[1].Setsx(decalage_horizontale);
	carre[1].Setsy(decalage_verticale);
	carre[2].Setsx(decalage_horizontale);
	carre[2].Setsy(decalage_verticale);
	carre[3].Setsx(decalage_horizontale);
	carre[3].Setsy(decalage_verticale);
	carre4->Setsx(decalage_horizontale);
	carre4->Setsy(decalage_verticale);
	
	carre[0].Deplacer(direction, saut);
	cout << "carre 1\nsx = " << carre[0].Getsx() << "\tsy = " << carre[0].Getsy() << "\tcote = " << carre[0].GetCote() << endl;

	carre[1].Deplacer(dx, dy);
	cout << "carre 2\nsx = " << carre[1].Getsx() << "\tsy = " << carre[1].Getsy() << "\tcote = " << carre[1].GetCote() << endl;

	carre[2].Deplacer('o', saut+10);
	cout << "carre 3\nsx = " << carre[2].Getsx() << "\tsy = " << carre[2].Getsy() << "\tcote = " << carre[2].GetCote() << endl;
	
	carre[3].Deplacer(dx+5, dy+5);
	cout << "carre 4\nsx = " << carre[3].Getsx() << "\tsy = " << carre[3].Getsy() << "\tcote = " << carre[3].GetCote() << endl;

	carre4->Deplacer(dx + 50, dy - 50);
	cout << "carre 5\nsx = " << carre4->Getsx() << "\tsy = " << carre4->Getsy() << "\tcote = " << carre4->GetCote() << endl;

	delete carre4;
}