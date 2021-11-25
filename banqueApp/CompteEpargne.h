#pragma once
#include "Compte.h"
namespace Banque {
	class CompteEpargne : public Compte
	{
	private:
		double tauxI;
	public:
		CompteEpargne(Client* c, MAD* m, double TI);
		void calculInteret();
		void crediter(MAD* M) override;
	};
};

