#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

// Why is there a person struct in this? it never gets used

void Square(int inputInt) 
{
	inputInt = inputInt * inputInt;
}

void SquareRef(int& inputRef)
{
	inputRef = inputRef * inputRef;
}

void Double(int* inputPtr)
{
	*inputPtr = *inputPtr * 2;
}

int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)			✔
	// declare a int reference and set it to the int variable above						✔
	// output the int variable															✔
	// set the int reference to some number												✔		
	// output the int variable															✔
	// what happened to the int variable when the reference was changed? (insert		✔
	//answer)										
	// 
	// /\/\The initial integer variable was changed alongside the reference integer/\/\
	// 
	// output the address of the int variable											✔
	// output the address of the int reference											✔
	// are the addresses the same or different? (insert answer)							✔

	// /\/\Despite being linked together and having the same value, the addresses are ever so slightly different./\/\
	
	int initialInt = 5;
	int& referenceInt = initialInt;
	cout << "Initial int: " << initialInt << endl;
	cout << "Changing reference int..." << endl;
	referenceInt = 8;
	cout << "Reference changed" << endl;
	cout << "Initial int: " << initialInt << endl;
	cout << "Reference int address: " << &referenceInt << endl;
	cout << "Initial int address: " << &initialInt << endl;

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int				✔
	//parameter																			✔
	// in the function, multiply the int parameter by itself and assign it back			✔
	//to the parameter(i = i * i)														✔
	// call the Square function with the int variable created in the REFERENCE			✔
	//section																			✔
	// output the int variable to the console											✔
	// !! notice how the variable has not changed, this is because we only passed		✔
	//the value to the function !!														✔
	// change the Square function to take a int reference								✔
	// !! notice how the calling variable has now changed, this is because we			✔
	//'passed by reference' !!															✔
	// !! when a function takes a reference parameter, any changes to the				✔
	//parameter changes the calling variable ""											✔

	cout << "----------------------------" << endl;
	cout << "\tReference Parameter" << endl;
	initialInt = 5;
	cout << "Initial Int: " << initialInt << endl;
	cout << "Attempting basic square..." << endl;
	Square(initialInt);
	cout << "Squaring complete: new int value: " << initialInt << endl;
	cout << "Attempting referenced Square..." << endl;
	SquareRef(referenceInt);
	cout << "Referenced squaring complete: new int value: " << initialInt << endl;



	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)					✔
	// set the int pointer to the address of the int variable created in the			✔
	//REFERENCE section																	✔
	// output the value of the pointer													✔
	// what is this address that the pointer is pointing to? (insert answer)			✔
	// 
	// /\/\The address the pointer is pointing to is the memory address of the initial integer variable that was set./\/\
	// 
	// output the value of the object the pointer is pointing to (dereference the		✔
	//pointer)																			✔

	cout << "----------------------------" << endl;
	cout << "\tPointer Variable" << endl;
	int* pointerInt; //nullptr
	pointerInt = &referenceInt;
	cout << "Pointer location: " << pointerInt << endl;
	cout << "Initial integer location: " << &initialInt << endl;
	cout << "Dereferenced pointer: " << *pointerInt << endl;
	cout << "Initial integer value: " << initialInt << endl;
	
	
	
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer		✔
	//parameter																			✔
	// in the function, multiply the int pointer parameter by 2 and assign it			✔
	//back to the parameter(i = i * 2)													✔
	// !! make sure to dereference the pointer to set the value and not set the			✔
	//address !!																		✔
	// call the Double function with the pointer created in the POINTER VARIABLE		✔
	//section																			✔
	// output the dereference pointer													✔
	// output the int variable created in the REFERENCE section							✔
	// did the int variable's value change when using the pointer?	/\/\ Yes /\/\		✔
	
	cout << "----------------------------" << endl;
	cout << "\tPointer Parameter" << endl;
	cout << "Initial integer: " << initialInt << endl;
	cout << "Doubling via pointer..." << endl;
	Double(pointerInt);
	cout << "(new) Dereferenced pointer: " << *pointerInt << endl;
	cout << "Initial integer: " << initialInt << endl;
}