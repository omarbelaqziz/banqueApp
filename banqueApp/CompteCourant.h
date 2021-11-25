#pragma once
#include "Compte.h"
namespace Banque
{
    class CompteCourant : public Compte
    {
    private:
        double decouvert;
    public:
        CompteCourant(Client *c, MAD* m,double decouvert);

    };
};

