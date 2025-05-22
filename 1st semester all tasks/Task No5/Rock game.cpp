#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getComputerChoice() {
    return rand() % 3 + 1; 
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    srand(time(0));

    int userChoice;
    cout << "Rock-Paper-Scissors Game" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> userChoice;

    while (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> userChoice;
    }

    int computerChoice = getComputerChoice();

    cout << "You chose: ";
    switch (userChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    determineWinner(userChoice, computerChoice);

}
