#include "Database.h"
#include "Duck.h"
#include "Tiger.h"
#include <fstream>

/*
Database::~Database()
{
	for (auto& obj : objects) {
		delete obj;
	}
}
*/


Animal Database::Create(int type) {
	Animal* obj = nullptr;
	switch (type) {
	case 0:
		obj = new Duck;
		break;
	case 1:
		obj = new Tiger;
		break;
	}
	obj->Read(std::cout, std::cin);
	return *obj;
}

void Database::Create(Animal::eType type) {
	unique_ptr<Animal> obj;
	//Animal* obj;
	switch (type) {
	case Animal::eType::BIRD:
		obj.reset(new Duck);
		break;
	case Animal::eType::CAT:
		obj.reset(new Tiger);
		break;
	}
	//obj->Read(cout, cin);
	cin >> *obj;
	objects.push_back({ move(obj) });
}

void Database::Display(const string& name) {
	for (auto& obj : objects)
	{
		if (obj->GetName() == name) {
			//obj->Write(std::cout);
			cout << *obj;
		}
	}
}

void Database::Display(Animal::eType type) {
	for (auto& obj : objects) {
		if (obj->GetType() == type) {
			//obj->Write(std::cout);
			cout << *obj;
		}
	}
}

void Database::Save(const std::string& filename)
{
	ifstream input(filename);
	if (input.is_open())
	{
		while (!input.eof())
		{
			int type;
			input >> type;
			Animal animal = Create(type);
			input >> animal;
			//objects.push_back({ move(animal) });
		}
	}
}

void Database::Load(const std::string& filename)
{
	ofstream output(filename);
	if (output.is_open())
	{
		for (auto& obj : objects) {
			//obj->Write(std::cout);
			cout << *obj;
			cout << static_cast<int>(obj->GetType());
		}
	}
}

void Database::DisplayAll() {
	for (auto& obj : objects) {
		//obj->Write(std::cout);
		cout << *obj;
	}
}
