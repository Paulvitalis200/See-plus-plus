#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You lose!" <<endl;
    } else {
        cout << "You Win!" <<endl;
    }
    
    return 0;
}