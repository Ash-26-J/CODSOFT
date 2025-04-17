#include<bits/stdc++.h>
using namespace std;

int main() {
    // Seed random number generator
    srand(static_cast<unsigned int>(std::time(0)));
    int randomNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            out << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number!\n";
        }
    }

    return 0;
}
