#pragma once
#include <iostream>
#include "date.h"
#include "MAD.h"
using namespace std;
namespace Banque
{
	class Operation
	{
	private:
		static int compteur;
		const int num;
		date* d;
		MAD* montant;
		string libele;
	public: 
		Operation(date* d, MAD* montant, string libele);
		void afficher();
	};
};

