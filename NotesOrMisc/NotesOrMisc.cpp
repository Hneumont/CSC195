
#include <iostream>

using namespace std;

int main()
{
    string fruits[5] = { "tomato" };
    cout << fruits[0] << fruits[2];
}

/* MEMORY
void set(int& i)
{
    i += 123;
}

void swap(int* i1, int* i2)
{
    int tempNum1 = *i1;
    i1 = i2;
    *i2 = tempNum1;
}

int main() // MEMORY
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
    r = 40;
    set(i1);

    swap(i1, i2);

    int* p = nullptr; //can be created without a value - int* p;
    p = &i1;

    cout << "i1:" << i1 << endl;
    cout << "i2:" << i2 << endl;
    cout << "i1 ADDRESS:" << &i1 << endl; //prints memory value
    cout << "R:" << &r << endl;
    cout << "P:" << p << endl;
    cout << "P address:" << &p << endl;
    cout << "*P DEREFERENCED:" << *p << endl;

    cout << "------------------------------------------------------\n";

    int number1 = 1;
    int* hnum1 = new int(4);

    int* Arrnum = new int[4];
    cout << *&number1;
}
*/

/* DATA TYPES
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
}
*/

    // User defined data types:
    // Structure - struct ; Groups items of data types (differing or otherwise) into a single type; essentially a java interface
    // Class - class ; holds data membebrs and member functions which can be used by creating an instance of that class;
    // Union - union ; essentially a struct- but only 1 data type is stored at a time, regardless of how many are in the union ; stores the highest memory value;
    // Enumeration - enum ; works same as other languages; a series of user-defined constants; {obj1, obj2, obj3}

    // A declaration provides basic attributes of a symbol; a type and its name E.x.:(int myInt;)

    /*
    * Stack:
    * Stack memory stores temporary variables in a first-in-last-out methodology, the first data that comes in will be relieved last
    * in other words old data gets deleted after new data
    */

    /*
    * Heap:
    * 
    */

    /*
    * Reference:
    * A reference is an alias linking one variable to a pre-existing variable.
    * References can be created by appending & to a data-type (ex.: int& r  = i, string& newName = name)
    * References are commonly used to edit a value in a function without creating new variables and wasting memory.
    * ex.:
    * void editNum(int& newValue)
    * {
    *   newValue += 20;
    * }
    * int main()
    * {
    *   int mainValue = 8;
    *   editNum(mainValue)
    *   cout << mainValue // will print 28
    * }
    */

    /*
    * Pointers:
    * Pointers are variables used to store memory addresses
    * Pointers can be created by appending * to a data-type (ex.: int* tv = &ac, string* employeeID = &ssid;)
    */

    /*
    * Derefence operator:
    * Dereferences access the values stored within memory pointers,
    * the pointer reference can be used on a pointer to dereference it (eg. (*student).id = name)
    * or the -> reference can be used (eg.: studentID->name)
    */


    /*
    * Delete:
    * Deallocate a block of memory allocated with new operators
    * 
    * When delete is used to deallocate memory for a C++ class object, the object's destructor is called before the object's memory is deallocated
    * (if the object has a destructor)
    * 
    * If memory is not deallocated and the pointer variable is no longer valid, then that memory is lost and causes a memory leak.
    * 
    * A program that dereferences a pointer after the object is deleted can have unpredictable results or crashes
    */
    
    /*
    * Containers: 
    * Static array (ex.: int n1[5]; - creates 5 empty integers into an array)
    * array defaulting (ex.: n1[5] = {1, 2, 3, 4, 5} or n1[5] = {} OR n1[] = {1,2,3,4,5})
    * 
    * vector<type> - implements a dynamic resizable array
    * list<type> - implements a doubly linked list
    * stack<type> - elements are pushed/popped from the "back" of the contianer, which is known as the top of the stack.
    * queue<type>
    * 
    * array - set - unordered set
    * vector - multiset - unordered multiset
    * deque - map - unordered_map
    * forward_list - multimap -unordered map
    * list - - 
    */