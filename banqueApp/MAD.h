#pragma once
#include "devise.h"
namespace Banque {
	class MAD : public Devise
	{
	private:
		double valeur;
	public:
		MAD(double val);
		MAD& operator+(const MAD& M) const;
		MAD& operator*(double d) const;
		MAD& operator/(double d) const;
		MAD& operator-(const MAD& M) const;
		bool operator<=(const MAD& M)const;
		bool operator>=(const MAD& M) const;
		void afficher() const;
	};
};
