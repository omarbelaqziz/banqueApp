#include "ComptePayant.h"

double taux = 0.05;
Banque::ComptePayant::ComptePayant(Client* c, MAD* m) : Compte(c,m)
{
}

bool Banque::ComptePayant::debiter(MAD* M)
{
	MAD* res = new MAD(*M * (1 + taux));
	return Compte::debiter(res);
}

void Banque::ComptePayant::crediter(MAD* M)
{
	MAD* res = new MAD(*M * (1 - taux));
	Compte::crediter(res);
}
