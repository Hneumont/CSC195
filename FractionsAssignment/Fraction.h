#pragma once

namespace mathlib {
	template<typename T>
	class Fraction {
		Fraction(T numer, T deno) {
			if (deno == 0) deno = 1;
			numerator = numer;
			denominator = denominator;
		}
		int numerator;
		int denominator;
	public:
		T& operator * (Fraction frac)
		{
			return new Fraction(numerator*frac.numerator, denominator*frac.denominator)
		}
	};
}