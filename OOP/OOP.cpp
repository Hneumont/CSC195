#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{
    //0010 0011 1010 1110 0011 0100 1111 0011 1111 1100
    Animal flomper;
    flomper.Travel();
    Dog goldie; goldie.Travel();

    Animal* bartinual = new Animal;
    (*bartinual).Travel();
    bartinual->Travel(); // same as line before

    Animal* dogPTR = new Dog;
    dogPTR->Travel(); // returns dog output when 'Travel' is set as a virtual, otherwise returns animal output
    // worth noting that the 'override' keyword is placed in the header file NOT the cpp file.

    cout << bartinual->GetLimbs() << endl;
}