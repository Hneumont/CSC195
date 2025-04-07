// NotesOrMisc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    cout << "Data Type Program \n";

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;

    // Data type conversion

    // implicit conversion - target data type has the capacity to store the orginal value
    int i = 5;
    float iflt = 1;
    double idbl = iflt;

    // explicit conversion - explicitly inform the compiler that "I want to do this conversion"
    double jdouble = LDBL_MAX;
    float jflt = (float)jdouble; // traditional C++ way

    jflt = static_cast<float>(jdouble); // Modern C++ way

    // User defined data types:
    // Structure - struct ; Groups items of data types (differing or otherwise) into a single type; essentially a java interface
    // Class - class ; holds data membebrs and member functions which can be used by creating an instance of that class;
    // Union - union ; essentially a struct- but only 1 data type is stored at a time, regardless of how many are in the union ; stores the highest memory value;
    // Enumeration - enum ; works same as other languages; a series of user-defined constants; {obj1, obj2, obj3}

    // A declaration provides basic attributes of a symbol; a type and its name E.x.:(int myInt;)

    // 
}