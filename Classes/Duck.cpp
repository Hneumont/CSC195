#include "Duck.h"
#include <string>
#include <iostream>
using namespace std;

Duck::Duck()
{
	name = "Duck";
	type = BIRD;
	feathers = 0;
}

void Duck::Read(ostream& ostream, istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Enter number of feathers: ";
	istream >> feathers;
}

void Duck::Write(ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "feathers: " << feathers << endl;
}