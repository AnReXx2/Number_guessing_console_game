#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    srand(time(NULL));

    char playAgain;

    do {
        cout << "================================== NUMBERGUESSING v1.0 ==================================\n";
        cout << "Author: Anri | C++ Beginner-to-Intermediate Project | Error Handling Included\n\n";

        int secret = (rand() % 100) + 1;
        int attempts = 0;
        int guess;
        bool won = false;

        cout << "\nGuess the number (1-100)\n";

        while (!won) {
            cout << "Your guess: ";
            cin >> guess;

            if (cin.fail()) {
                cout << "Please enter a number!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            attempts++;

            if (guess == secret) {
                cout << "Congratulations! You won in " << attempts << " attempt(s)!\n";
                won = true;
            }
            else if (guess > secret) {
                cout << "Too high!\n";
            }
            else {
                cout << "Too low!\n";
            }
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "=========================================================================================\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}