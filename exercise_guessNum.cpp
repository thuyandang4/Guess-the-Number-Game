/*
1. Input time(0) into srand
2. Read in magicnum into integer. Randomize magicnum value between 0 and 100
3. Read in guess into integer
4. Display "Guess a magic number between 0 and 100: "
5. Receive user input for guess
6. While guess is not equal to magicnum
    If guess is greater than magicnum
        Display "Your guess is too high."
    If guess is less than magicnum
        Display "Your guess is too low."
    Display "Guess again: "
    Receive user input for guess
7. Display "Good job, the number is " << magicnum << "!"
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand (time(0));        // Generates random number

    // Read in magicnum and guess as integers
    int magicnum = rand() % 100;    // For values between 0 and 100
    int guess;

    cout << "Guess a magic number between 0 and 100: ";
    cin >> guess;   // Get guess from user

    // Loop if guess is not equal to magic number
    while (!(guess == magicnum))
    {
        if (guess > magicnum)       // If guess is greater than magic number
        {
            cout << "Your guess is too high." << endl;
            cout << " " << endl;    // Spacing
        }

        else if (guess < magicnum)      // If guess is less than magic number
        {
            cout << "Your guess is too low." << endl;
            cout << " " << endl;    // Spacing
        }

        cout << "Guess again: ";    // Prompts user to guess again
        cin >> guess;
    }   // Breaks out of loop if guess is equal to magic number

    // Displays when guess is equal to magic number
    cout << "Good job, the number is " << magicnum << "!" << endl;

    return 0;
}

