#pragma once

class CCarre
{
private:
	int sx;
	int sy;
	int cote;

public:
	void Setsx(int sx1); // change la valeur de sx avec la valeur de sx1
	void Setsy(int sy1); // change la valeur de sy avec la valeur de sy1
	void Setcote(int cote1); // change la valeur de cote avec la valeur de cote1
	int Getsx(); // retourne la valeur de sx
	int Getsy(); // retourne la valeur de sy
	int GetCote(); // retourne la valeur du cote
	void afficher(); // affiche les valeur de la class

	// "Déplace" le carré sans le dessiner. Les attributs x et y  
	// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entrées : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de déplacement du carré 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);
};
