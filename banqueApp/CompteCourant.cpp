#include "CompteCourant.h"



Banque::CompteCourant::CompteCourant(Client* c, MAD* m, double decouvert): Compte(c,m)
{
	this->decouvert = decouvert;
}
