
#include <iostream>
using namespace std;
int main() {
    double x;
    cout << "Enter a value for x: ";
    cin >> x;
    if ((x > 1) && (x < 3)) {
        cout << "The quadratic expression x^2 - 4x + 3 is negative for x = " << x << endl;
    } else {
        cout << "The quadratic expression x^2 - 4x + 3 is not negative for x = " << x << endl;
    }

    return 0;
}


