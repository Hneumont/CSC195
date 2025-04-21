#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;
int main()
{	
	array<string, 7> weekdays = { "Monday", "Tuesday", "Wednesday", "Thursday","Friday","Saturday","Sunday" };
	for (string day : weekdays)
	{
		cout << day << endl;
	}
	// Line break, cleans up the console
	cout << endl << "-------------------------" << endl;
	vector<int> numbers = { 0,1,2,3,4,5 };
	numbers.push_back(6);
	// adds a value to the back (->) of the vector
	numbers.push_back(7);
	// removes the last value in the vector
	numbers.pop_back();
	for (int num : numbers) {
		cout << num << endl;
	}
	cout << endl << "-------------------------" << endl;
	// Pretty sure these are all fruits
	list<string> fruits = { "Tomato","Apple","Kiwi" };
	fruits.remove("Tomato");
	for (string food : fruits) {
		cout << food << endl;
	}
	cout << endl << "-------------------------" << endl;
	map<string, int> shoppingList = { {"Milk", 2}, {"Eggs", 24}, {"Bacon", 8} };
	shoppingList["Milk"] = 3;
	// had to look up how to iterate through a map
	// auto works as an iterator variable and is capable of 
	// accessing each value of a key-value pair from the map
	for (auto shList = shoppingList.begin(); shList != shoppingList.end(); ++shList) {
		cout << shList->first << ", " << shList->second << endl;
	}
}