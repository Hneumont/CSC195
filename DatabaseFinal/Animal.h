#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;


class Animal
{
public:
	enum eType
	{
		CAT,
		BIRD
	};
	string name;
	eType type;
	float weight;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	//files
	virtual void Read(ifstream& istream);
	virtual void Write(ofstream& ostream);
	friend istream& operator >> (std::istream& istream, Animal& animal);
	friend ostream& operator << (std::ostream& ostream, Animal& animal);
	//!files
	string GetName();
	virtual eType GetType();
};