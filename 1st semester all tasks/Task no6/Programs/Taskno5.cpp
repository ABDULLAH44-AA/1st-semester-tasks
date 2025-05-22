
#include <iostream>
using namespace std;
int main() {
    double x;
  	cout << "Enter a value for x: ";
   	cin >> x;
    if ((x < -1) || (x > 2)) {
        cout << "The quadratic expression x^2 - x - 2 is positive for x = " << x << endl;
    } else {
        cout << "The quadratic expression x^2 - x - 2 is not positive for x = " << x <<endl;
    }

    return 0;
}

