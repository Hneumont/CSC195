#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playRound(int scoreBound, int attemptAmount) {
    srand(time(0));
    int score = rand() % scoreBound + 1;
    bool win = false;
    int userIntGuess = -1;
    for (int i = 0; i < attemptAmount; i++) {
        cout << "Guess a number between 1 and " << scoreBound << ": \n";
        cin >> userIntGuess;

        if (score > userIntGuess) {
            cout << "Too low, try again.\n";
        }
        else if (score < userIntGuess) {
            cout << "Too high, try again.\n";
        }
        else if (score == userIntGuess) {
            cout << "You win!\n";
            win = true;
            break;
        }
    }
    if (win == false) {
        cout << "You lose. The answer is: " << score;
    }
}

int main()
{
    int userDifficulty = -1;
    while (userDifficulty < 0 || userDifficulty > 4) {
        cout << "Select difficulty:\n1. Easy\n2. Medium\n3. Hard\n4. Insane \n0. Quit\n";
        cin >> userDifficulty;
        if (userDifficulty < 0 || userDifficulty > 4) {
            cout << "Invalid selection, please try again.";
        }
    }
    cout << endl;
    switch (userDifficulty) {
        case 0: // Quit
            cout << "Goodbye!\n";
            _fcloseall;
            break;
        
        case 1: // Easy
            cout << "Easy Mode Selected.\n";
            playRound(10, 5);
            break;
        
        case 2: // Medium
            cout << "Medium Mode Selected.\n";
            playRound(50, 5);
            break;
        
        case 3: // Hard
            cout << "Hard Mode Selected.\n";
            playRound(100, 5);
            break;
        
        case 4: // Insane
            cout << "INSANE Mode Selected.\n";
            playRound(1000, 3);
            break;
    }

}


/*
string toLower(string input)
{
    string output;
    for (char in input)
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
