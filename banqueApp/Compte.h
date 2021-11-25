#pragma once
#include <vector>
#include"Client.h"
#include "MAD.h"
#include "Operation.h"
#include "GC.h"

namespace Banque {
	class Compte
	{
		//attributs
	private:
		vector <Operation*> list_op;
		const int numcompte;
		static int count;
		Client* titulaire;
		MAD* solde;
		static MAD* plafond;
		GC* ref;

		// Methodes
	public: 
		Compte(Client*, MAD*); // avec parametres
		Compte(const Compte&);
		virtual void crediter(MAD*M); 
		virtual bool debiter(MAD*M); 
		bool verser(MAD* M, Compte& C);
		virtual void consulter()const=0;
		bool isUnderHalf(MAD* m);
		~Compte();

	protected:
		void maj(double pourcentage);



	};

};