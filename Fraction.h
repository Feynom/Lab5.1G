#pragma once
#include "Pair.h"

class Fraction : public Pair
{
public:
	Fraction();
	Fraction(double, double);
	Fraction(Fraction&);

	Fraction& operator = (const Fraction&);
	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);

	Fraction& operator ++ ();
	Fraction& operator -- ();
	Fraction operator ++ (int);
	Fraction operator -- (int);
};

