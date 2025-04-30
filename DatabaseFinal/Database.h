#pragma once
#include "Animal.h"
#include <vector>
using namespace std;
class Database {
public:
	vector<unique_ptr<Animal>> objects;
	~Database();
	//Database();
	Animal Create(int type);
	void Create(Animal::eType type);
	void DisplayAll();
	void Display(const string& name);
	void Display(Animal::eType type);
	void Load(const std::string& filename);
	void Save(const std::string& filename);
};