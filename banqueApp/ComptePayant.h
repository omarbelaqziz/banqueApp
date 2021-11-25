#pragma once
#include "Compte.h"
namespace Banque {
    class ComptePayant : public Compte
    {
    private:
        static double taux;
    public:
        ComptePayant(Client* c, MAD* m);
        bool debiter(MAD* M) override;
        void crediter(MAD* M) override;
    };
};

