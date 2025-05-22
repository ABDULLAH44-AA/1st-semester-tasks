#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter a single character: ";
    cin >> input;
 if (input >= 'A' && input <= 'Z') {
        cout << "The character is an Uppercase letter." << endl;
    } else if (input >= 'a' && input <= 'z') {
        cout << "The character is a Lowercase letter." << endl;
    } else {
        cout << "The character is a Special character." << endl;
    }

    return 0;
}
