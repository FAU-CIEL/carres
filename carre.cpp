#include "carre.h"
#include <iostream>

using namespace std;

void CCarre::Setsx(int sx1)
{
	sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	cote = cote1;
}

int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::afficher()
{
	cout << sx << endl;
	cout << sy << endl;
	cout << cote << endl;
}

void CCarre::Deplacer(char direction, int saut)
{
	if (direction == 'n')
		sy -= saut;
	else if (direction == 's')
		sy += saut;
	else if (direction == 'e')
		sx += saut;
	else if (direction == 'o')
		sx -= saut;
}

void CCarre::Deplacer(int dx, int dy)
{
	sx += dx;
	sy += dy;
}
