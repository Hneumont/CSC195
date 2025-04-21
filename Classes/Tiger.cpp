#include "Tiger.h"
#include <string>
#include <iostream>
using namespace std;

Tiger::Tiger()
{
	name = "Tiger";
	type = CAT;
	stripes = 0;
}

void Tiger::Read(ostream& ostream, istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Enter amount of stripes: ";
	istream >> stripes;
}

void Tiger::Write(ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "stripes: " << stripes << endl;
}