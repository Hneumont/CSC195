#include "Animal.h"
#include <iostream>
#include <fstream>
using namespace std;

void Animal::Read(ostream& ostream, istream& istream)
{
	ostream << "Enter weight:";
	istream >> weight;
}

void Animal::Write(ostream& ostream)
{
	ostream << weight << endl;
}


string Animal::GetName()
{
	return name;
}

Animal::eType Animal::GetType()
{
	return type;
}

// new io passes

void Animal::Read(ifstream& istream)
{
	istream >> weight;
}

void Animal::Write(ofstream& ostream)
{
	ostream << weight << endl;
}

istream& operator>>(istream& istream, Animal& animal)
{
	animal.Read(cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Animal& animal)
{
	animal.Write(ostream);
	return ostream;
}