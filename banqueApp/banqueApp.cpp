// banqueApp.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Client.h"
#include "Compte.h"
#include "MAD.h"
using namespace std;
using namespace Banque;
int main()
{
    Client *c1=new Client("user1", "user1", "adduser1");
    MAD* s1 = new MAD(20000);
    MAD* s2 = new MAD(1500);
    MAD* s3 = new MAD(20000);
    Compte *cpt1 = new Compte(c1, s1);
    Compte cpt3(*cpt1);
    Compte cpt4(cpt3);
  // Compte* cpt2 = new Compte(c1, s3);
    //cpt1->debiter(s2);
    //cpt1->crediter(s3);
  // cpt1->verser(s2, *cpt2);
    cpt1->consulter();
   // cpt2->consulter();
   

    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
