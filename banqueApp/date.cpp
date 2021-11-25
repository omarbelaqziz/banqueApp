#include <iostream>
#include "date.h"

using namespace std;

date::date(int j, int m, int a)
{
	this->j = j;
	this->m = m;
	this->a = a;
}

void date::afficher()
{
	cout << this->j << "/" << this->m << "/" << this->a;
}
