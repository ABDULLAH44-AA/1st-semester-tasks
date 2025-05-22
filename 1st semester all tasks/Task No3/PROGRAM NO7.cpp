#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') ||
        (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') ||
        (ch == 'u' || ch == 'U')) {
        cout << ch << " is a vowel.";
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant.";
    } else {
        cout << "Invalid input.";
    }

    return 0;
}

