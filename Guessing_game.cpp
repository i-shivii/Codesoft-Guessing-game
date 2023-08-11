// Author: codesoft vitual internship
// language used : c++
// Title: Guess the number

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

    srand(time(NULL));

    int Hiddenum = (rand() % 50) + 1; // Generate a random number between 1 and 50.
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 50." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < Hiddenum)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > Hiddenum)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the hidden number in " << attempts << " attempts." << endl;
        }

    } while (guess != Hiddenum);

    return 0;
}
