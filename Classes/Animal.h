#pragma once
#include <string>

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
	float weight;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	string GetName();
	virtual eType GetType() = 0;
};