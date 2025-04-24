#pragma once

namespace mathlib {
	class Fraction {
		Fraction(int numer, int deno) {
			if (deno == 0) deno = 1;
			numerator = numer;
			denominator = denominator;
		}
		int numerator;
		int denominator;
	};
}