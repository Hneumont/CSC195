#pragma once
#include <iostream>
using namespace std;

namespace mathlib {
	template<typename T = int>
	class Fraction {
	protected:
		T numerator;
		T denominator;
	public:
		Fraction();
		Fraction(T numer, T deno);
		T getNumerator();
		T getDenominator();
		void setNumerator(T value);
		void setDenominator(T value);
		void Simplify();
		double toDouble();
		Fraction operator*(Fraction frac);
		Fraction operator/(Fraction frac);
		Fraction operator+(Fraction frac);
		Fraction operator-(Fraction frac);
		bool operator==(Fraction frac);
		bool operator>(Fraction frac);
		bool operator<(Fraction frac);
	};
	template<typename T>
	ostream& operator<< (ostream& Str, const Fraction<T>& v);
	template<typename T>
	istream& operator>> (istream& Str, const Fraction<T>& v);
}