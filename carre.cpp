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

void CCarre::afficher()
{
	cout << sx << endl;
	cout << sy << endl;
	cout << cote << endl;
}
