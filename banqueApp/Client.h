#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;
namespace Banque {
	class Client
	{

		// attributs
	private:
		string nom;
		string prenom;
		string adresse;
		vector <Compte*> list_compts;

	public:
		Client(string , string, string);
		void Afficher()const;

	};
};
