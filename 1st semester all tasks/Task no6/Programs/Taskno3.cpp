#include <iostream>
using namespace std;
int main() {
    int exam;
    int programs_done;

    cout << "Enter your exam score (out of 100): ";
    cin >> exam;
    cout << "Enter the number of programs you have completed: ";
    cin >> programs_done;

    
    if (exam >= 60 && programs_done >= 10) {
    cout << "Congratulations, you have passed!" << endl;
    } else {
	cout << "Sorry, you have failed. Better luck next time!" << endl;
    }

    return 0;
}

