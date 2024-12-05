#include <iostream>
#include "carre.h"

using namespace std;

void main()
{
	CCarre carre1;
	int decalage_horizontale;
	int decalage_verticale;
	int longueur_cote;
	decalage_horizontale = 0;
	decalage_verticale = 0;
	longueur_cote = 0;

	cout << "Entrez la valeur du decalage horizontale : ";
	cin >> decalage_horizontale;
	cout << "Entrez la valeur du decalage verticale : ";
	cin >> decalage_verticale;
	cout << "Entrez la longueur du cote d'un carre : ";
	cin >> longueur_cote;
	
	carre1.Setsx(decalage_horizontale);
	carre1.Setsy(decalage_verticale);
	carre1.Setcote(longueur_cote);
	carre1.afficher();
}