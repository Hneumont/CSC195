#pragma once
#include "Animal.h"
using namespace std;
class Tiger : public Animal {
	eType type;
public:
	Tiger();
	int stripes;
	virtual void Read(ostream& ostream, istream& istream) override;
	virtual void Write(ostream& ostream) override;
	virtual eType GetType() override { return eType::CAT; };
};