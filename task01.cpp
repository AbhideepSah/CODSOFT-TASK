#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0;

    cout << "LETS PLAY NUMBER GUESSING GAME!!!\n";
    cout << "COME ON!!! Guess the number between 1 & 100.\n";

    do {
        
        cout << "What number did you guess?? : ";
        cin >> guess;

        
        if (guess > secretNumber) {
            cout << "Too large !! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too small !! Try again.\n";
        }

        attempts++;
    } while (guess != secretNumber);

    
    cout << "CONGO !!! YOU GUESS THE CORRECT NUMBER IN " << attempts << " attempts.\n";
    cout << "PLEASE PRESS ENTER TO EXIT THE GAME...";
    cin.ignore();
    cin.get();

    return 0;
}
