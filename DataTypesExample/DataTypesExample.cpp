
#include <iostream>
#include "Declarations.h"

using namespace std;

int main()
{
	cout << "User Data Types\n";
	Sandwich pastramiSW;
	pastramiSW.meatType = pastrami;
	pastramiSW.weight = 1.0f;
	pastramiSW.toppings[0] = lettuce;
	pastramiSW.heatSandwich();
	pastramiSW.toppings[1] = ketchup;
	pastramiSW.toppings[2] = provalone_cheese;

	cout << sizeof(pastramiSW) << endl;
	cout << sizeof(Sandwich) << endl;
}
