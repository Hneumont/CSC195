
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
    * Dynamic memory allocation, must be freed/created and is typically used during runtime NOT during compile
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

    /*
    * for loops:
    * for (int i = 0; i < VALUE; i++)
    * 
    * Each loops:
    * Ex.:
    * for(string fruit : fruits)
    * {
    *   cout << chemical << endl;
    * }
    */

    /*
    * Object Oriented Programming:
    * 
    * creating objects that contain both data and functions;
    * programming paradigm based on the concept of "objects", which can contain data and code:
    * data in the form of fields (often known as attributes, members or properties), and code,
    * in the form of procedures (often known as methods or functions).
    * 
    * 
    * Procedual Programming:
    * Writing procedures or functions that perform operations on the data
    * 
    * Class:
    * The blueprint of the object with the data members and member functions of the class.
    * 
    * Object/Instance:
    * The realization of a class. The creation of an instance is called instantiation.
    * 
    * 
    * ------------------------------------------------------
    * Encapsulation:
    * creates a limited access structure, typically for security reasons so as to not intrude on
    * code that shouldn't be called;
    * 'Refers to the building of data with the methods that operate on that data'
    * 
    * Abstraction:
    * Allows varying access to internal state of a class,
    * opposite of encapsulation;
    * 'shows only essential attributes and hides unnecessary information; 
    * hiding unnecessary details from users'
    * 
    * Inheritance:
    * Creates a hierarchy, linking parent/child classes;
    * child classes inherit from parent classes, obtaining their methods and variables.
    * 
    * Polymorphism:
    * Overriding functionality when inheriting
    * 'Stands for many forms;
    * a call to a member function will cause a different function to be executed 
    * depending on the type of object that invokes the function.'
    * 
    * Virtual function:
    * a virtual function is a member function which is declared within a parent class
    * and is re-difined (overriden) by a child/derived class. when you refer to a derived class
    * object using a pointer or a reference to the base class, you can call a virtual function
    * for that object and execute the derived class's version of the function.
    */

    /*
    * A class in C++ is a user-defined type or data structure
    * declared with keyword class that has data and functions
    * 
    * 
    * 
    * A class member function can be declared in the class body and have its definition outside the body.
    * 
    * 
    * To access the members of a class through an instance of the class use the '.' for the object
    * or the '->' for a pointer to the object.
    * (Ex.: 
    *  class.function();
    *  class->function();
    * )
    * 
    * 
    * CONSTRUCTOR:
    * A class constructor is a special member function of a class that is executed
    * whenever we create new objects of that class. it has the same name as the class and no return type.
    * 
    * (Ex.:
    * 
    * Class myClass
    * {
    * public:
    * myClass() {} // default constructor
    * myClass() : my_data(30) {} // sets 'my_data' int variable to 30 
    * myClass() { my_data = 30; } // same as ^
    * myClass(int data) : my_data(data) {} // sets 'my_data' int variable to user-defined paramater intake
    * 
    * protected:
    * int my_data = 0;
    * }
    * 
    * )
    * 
    * DESTRUCTOR:
    * A class destructor is a special member function of a class that is executed whenever an object is
    * destroyed. It has th same name as the class and no return type.
    * 
    * (Ex.:
    * ~myClass() // ~ distinguishes a destructor from a constructor
    * )
    */


/*
STREAMS
istream - reads information from the console as a string and saves it to a pointed variable, casting to the proper type in the process
ostream - reads information from user code and displays it onto the terminal
*/


/*
* Overload
* 
*  : extends entire class
*  :: extends class member (functions)
* 
* 
*/


/*
* TEMPLATE:
* 
* 
* #include <iostream>
* 
* using namespace std;
* 
* int max(int i1, int i2)
* {
*   return(i1 > i2) ? i1: i2; //ternary operation (? = return when true : = return when false)
* }
* 
* int main()
* {
*   cout << max(32, 22); //returns 32
*   
*   cout << max(6.34f, 6.56f); //returns 6.34, uses default method, not created one
* }
* 
* ------------
* 
* #include <iostream>
* 
* using namespace std;
* 
* namespace myMath
* {
*   int max(int i1, int i2)
*   {
*       return(i1 > i2) ? i1: i2; //ternary operation (? = return when true : = return when false)
*   }
* }
* 
* int main()
* {
*    cout << myMath::max(5.3f,24.3f)
* }
*
*
* 
* template<typename T>
* T max(T i1, T i2)
* {
*   return (i1 > i2) ? i1 : i2 //ternary operation
* }
* // T represents a variable- variable;
* // can be int, float, double, etc.
* // but all Ts must be the same variable type
* 
* template<typename T, typename U>
* T max(T i1, U i2)
* {
*   return (i1 > i2) ? i1 : i2 //ternary operation
* }
* // using template like this allows for mixing variable types
* // int, float | float, double | etc.
*
* 
* 
* class TemplateClass
* {
* private:
*   int x, y;
* public:
*   TemplateClsas() : x{0}, y{0} {}
*   TemplateClass(int x, int y) : x{x}, y{y} {}
* };
* 
* -------
* 
* template<typename T>
* class TemplateClass
* {
* private:
*   T x, y;
* public:
*   TemplateClass() : x{0}, y{0} {}
*   TemplateClass(T x, T y) : x{x}, y{y} {}
* };
* 
* 
* -----------------------------------------------
* 
* template<typename T, unsigned int Size>
* class Array
* {
* private:
*   T m_elements[Size]
* public:
* // overloads [] operation
*   T& operator [] (int pos){
*       return m_elements[position]
*   }
* };
* 
* ///
* int main()
* {
*   Array<string, 5> strAR;
* };
*/ 

 
 
/*
* Smart Pointers
* A smart pointer can make pointers to work in a way that we don't need to explicitly call delete. A smart pointer is a wrapper class over a pointer
* with an operator like * and -> overload.
* 
*
* template<typename T>
* class smart_ptr
* {
* public:   
*    smart_ptr(T* ptr) : _ptr{ptr} {}
*   ~smart_ptr() { if (_ptr) delete _ptr; }
* 
*   T& operator * () { return *_ptr; }
*   T* operator & () { return _ptr }
* 
* private:
*   T* _ptr{};
* }
* 
* std::unique_ptr:
* std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of
* scope. the unique_ptr allows exactly one owner of the underlying pointer
*/ 


/*
* BONUS:
* int& add(int a, inst b)
* {
*   int result = 0;
*   result = a + b;
*   return result;
* }
* 
* add(3,5); -> causes '8' to be stored with a reference in memory, reference stays after being destructed, wrapping in a class fixes this issue
* 
* int* add(int a, inst b)
* {
*   int result = 0;
*   result = a + b;
*   return &result;
* }
* 
* stack = static, during compile time
* heap = dynamic, during runtime
*/