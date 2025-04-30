#include "Fraction.h"
#include <ostream>
#include <istream>
#include <iostream>
#include <float.h>
using namespace std;

namespace mathlib {

	
	Fraction<>::Fraction()
	{
		denominator = 1;
		numerator = 1;
	}

	template <typename T>
	Fraction<T>::Fraction(T numer, T deno) : numerator(numer), denominator(deno)
	{
		if (deno == 0) deno = 1;
	}

	template <typename T>
	T Fraction<T>::getNumerator()
	{
		return numerator;
	}

	template <typename T>
	T Fraction<T>::getDenominator()
	{
		return denominator;
	}

	template <typename T>
	void Fraction<T>::setNumerator(T value)
	{
		numerator = value;
	}

	template <typename T>
	void Fraction<T>::setDenominator(T value)
	{
		denominator = value;
	}

	
	void Fraction<>::Simplify()
	{
		return;
	}

	
	double Fraction<>::toDouble()
	{
		return static_cast<double>(getNumerator()) / static_cast<double>(getDenominator());
	}

	Fraction<> Fraction<>::operator*(Fraction frac)
	{
		//output fraction
		Fraction oFrac;
		oFrac.setNumerator(getNumerator() * frac.getNumerator());
		oFrac.setDenominator(getDenominator() * frac.getDenominator());
		return oFrac;
	}

	Fraction<> Fraction<>::operator/(Fraction frac)
	{
		Fraction oFrac;
		oFrac.setNumerator(getNumerator() / frac.getNumerator());
		oFrac.setDenominator(getDenominator() / frac.getDenominator());
		return oFrac;
	}

	Fraction<> Fraction<>::operator+(Fraction frac)
	{
		Fraction oFrac;
		if (getDenominator() == frac.getDenominator()) {
			oFrac.setNumerator(getNumerator() + frac.getNumerator());
		}
		else
		{
			oFrac.setNumerator(getNumerator());
			oFrac.setDenominator(getDenominator());
		}
		return oFrac;
	}

	Fraction<> Fraction<>::operator-(Fraction frac)
	{
		Fraction oFrac;
		if (getDenominator() == frac.getDenominator()) {
			oFrac.setNumerator(getNumerator() + frac.getNumerator());
		}
		else
		{
			oFrac.setNumerator(getNumerator());
			oFrac.setDenominator(getDenominator());
		}
		return oFrac;
	}

	
	bool Fraction<>::operator==(Fraction frac)
	{
		return (getNumerator() == frac.getNumerator() && getDenominator() == frac.getDenominator());
	}

	
	bool Fraction<>::operator>(Fraction frac)
	{
		return (getNumerator() > frac.getNumerator() && getDenominator() >= frac.getDenominator());
	}

	
	bool Fraction<>::operator<(Fraction frac)
	{
		return (getNumerator() < frac.getNumerator() && getDenominator() <= frac.getDenominator());
	}

	
	ostream& operator<<(ostream& os, const Fraction<>& v)
	{
		os << '3' << '/' << '3';
		return os;
		// TODO: insert return statement here
	}

	istream& operator>>(istream& Str, const Fraction<>& v)
	{
		return Str;
		// TODO: insert return statement here
	}
}