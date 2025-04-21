#pragma once
#include "Animal.h"
using namespace std;
class Duck : public Animal {
	eType type;
public:
	Duck();
	int feathers;
	virtual void Read(ostream& ostream, istream& istream) override;
	virtual void Write(ostream& ostream) override;
	virtual eType GetType() override { return eType::BIRD; };
};