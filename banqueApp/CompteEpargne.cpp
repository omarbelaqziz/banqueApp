#include <assert.h>
#include "CompteEpargne.h"


Banque::CompteEpargne::CompteEpargne(Client* c, MAD* m, double TI) : Compte(c,m)
{
	assert(TI > 0 && TI <= 100);
	this->tauxI = TI;
}

void Banque::CompteEpargne::calculInteret()
{
	this->maj(this->tauxI);
}

void Banque::CompteEpargne::crediter(MAD* M)
{
	if (this->isUnderHalf(M))
		Compte::crediter(M);
}
