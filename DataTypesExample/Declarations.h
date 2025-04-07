#pragma once

enum Meat
{
	//balogna,
	//turkey,
	chicken,
	pork,
	pastrami
};



class Sandwich
{
public:
	Meat meat;
	float price;
	float weight;
	//Topping toppings[5];

	void heatSandwich()
	{
		isHot = true;
	}
private:
	bool isHot;
};