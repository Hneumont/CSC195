#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Write(string text, ostream& ostream)
{
    ostream << text;
}

int main()
{
    string text = "HELLO WOOOOOOOORLD!\n";
    cout << text;

    //cin >> text;
    getline(cin, text);
    //cout << text << endl;

    ofstream output("data.dat"); //create and open a file to stream data
    output << text;
    output.close();
    
    text = "";
    //input from file
    ifstream input("data.dat");    
    input >> text;
    input.close();
    
    cout << text << endl;
    
    
    
    
    
    
    
    //cin and cout can only be called by reference
    //they can NOT be copied/instanced and as such
    //whenever calling them they will error unless called
    //as a reference.
    //ostream must be called as reference

    /* Reasons to pass by reference
    * For classes like ostream/istream, cannot create copies, so pass by reference
    * Ensure manipulation of variables inside the main method
    * Avoid creating copies for large datatypes (resource/time feficient)
    * Rule of thumb: Use pass-by-reference whenever possible | Exception: 
    * Cannot point to nothing, so if parameter needs to point to a new 
    */
    Write(text, cout);
}
