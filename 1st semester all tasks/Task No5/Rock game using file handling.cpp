#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
    srand(time(0)); 
    int numGames;
    cout << "Enter the number of games you want to play: ";
    cin >> numGames;
    
    ofstream File("game_results.txt");
    if (!File.is_open()) {
        cout << "Unable to open file" << endl;
        return 1;
    }

    for (int i = 0; i < numGames; i++) {
        int userChoice, computerChoice;
        cout << "Game " << i + 1 << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> userChoice;

        while (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice. Please enter 1, 2, or 3: ";
            cin >> userChoice;
        }

        computerChoice = rand() % 3 + 1;

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

        string result;
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
            result = "Tie";
        } else if ((userChoice == 1 && computerChoice == 3) || 
                   (userChoice == 2 && computerChoice == 1) || 
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
            result = "You Win";
        } else {
            cout << "Computer wins!" << endl;
            result = "Computer Win";
        }

        File<< "Game " << i + 1 << ": ";
        File << "Your choice: ";
        switch (userChoice) {
            case 1:
                File << "Rock";
                break;
            case 2:
                File << "Paper";
                break;
            case 3:
                File << "Scissors";
                break;
        }
        File << ", " << "Computer choice: ";
        switch (computerChoice) {
            case 1:
                File << "Rock";
                break;
            case 2:
                File << "Paper";
                break;
            case 3:
                File << "Scissors";
                break;
        }
        File << ", Result: " << result << endl;
    }

    File.close();
    cout << "Results saved to game_results.txt" << endl;

}
