#include "Database.h"
#include "Duck.h"
#include "Tiger.h"
#include <iostream>

Database::~Database()
{
	for (Animal* obj : objects) {
		delete obj;
	}
}

void Database::Create(Animal::eType type) {
	Animal* obj = nullptr;
	Duck* tempDuck = new Duck;
	switch (type) {
	case Animal::eType::BIRD:
		obj = new Duck;
		break;
	case Animal::eType::CAT:
		obj = new Tiger;
		break;
	}
	obj->Read(std::cout, std::cin);
	objects.push_back(obj);
}

void Database::Display(const string& name) {
	for (Animal* obj : objects)
	{
		if (obj->GetName() == name) {
			obj->Write(std::cout);
		}
	}
}

void Database::Display(Animal::eType type) {
	for (Animal* obj : objects) {
		if (obj->GetType() == type) {
			obj->Write(std::cout);
		}
	}
}

void Database::DisplayAll() {
	for (Animal* obj : objects) {
		obj->Write(std::cout);
	}
}
