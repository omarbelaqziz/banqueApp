#include <iostream>
#include "Operation.h"
int compteur = 1;
Banque::Operation::Operation(date* d, MAD* montant, string libele) : num(compteur++)
{
	this->d = d;
	this->montant = montant;
	this->libele = libele;
}

void Banque::Operation::afficher()
{
	cout << this->libele << ":"; this->d->afficher();
	cout << " | num : " << this->num << " || ";
	 this->montant->afficher();
}
