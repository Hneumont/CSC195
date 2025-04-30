#include <iostream>
#include "Database.h"
using namespace std;

int main()
{
    Database* database = new Database;
    bool quit = false;
    string userNameChoice = "";
    while (!quit) {
        cout << "---------------------------------\n";
        cout << "|\t1 - Create\t\t|\n|\t2 - Display All\t\t|\n|\t3 - Display by Name\t|\n|\t4 - Display by Type\t|\n|\t5 - Load\t\t|\n|\t6 - Save\t\t|\n|\t7 - Quit\t\t|\n";
        cout << "---------------------------------\n";
        int choice;
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 1:
            // create object by type
            cout << "Enter type (0 for duck, 1 for tiger, ANY to cancel): " << endl;
            int createInput;
            Animal::eType userTypePick;
            cin >> createInput;
            cout << endl << endl;
            if (createInput != 0 && createInput != 1) {
                cout << "Exiting to menu..." << endl;
                break;
            }

            switch (createInput) {
            case 0:
                userTypePick = Animal::BIRD;
                break;
            case 1:
                userTypePick = Animal::CAT;
                break;
            }
            database->Create(userTypePick);
            cout << "Animal created." << endl << endl;
            break;

        case 2:
            // displayall
            database->DisplayAll();
            cout << endl;
            break;
        case 3:
            // ask for name then call database.Display
            cout << "Please specify the name of what you would like to display:\n(Options: Tiger/Duck)" << endl;
            cin >> userNameChoice;
            cout << endl;
            if (userNameChoice != "Tiger" && userNameChoice != "Duck") {
                //invalid pick
                cout << "Invalid choice selected, returning to menu..." << endl;
                break;
            }
            database->Display(userNameChoice);
            break;
        case 4:
        {
            cout << "Enter type (0 for tiger, 1 for duck): " << endl;
            int t;
            cin >> t;
            cout << endl;
            Animal::eType tToType = static_cast<Animal::eType>(t);
            database->Display(tToType);
            break;
        }
        case 5:
        {
            cout << "Enter filename:" << endl;
            string name;
            cin >> name;
            database->Load(name);
            break;
        }
        case 6:
        {
            cout << "Enter filename:" << endl;
            string name;
            cin >> name;
            database->Save(name);
            break;
        }
        case 7:
            quit = true;
            break;
        }
    }
    //delete database;
    _CrtDumpMemoryLeaks;
}