#include <iostream>
using namespace std;
int main() {
    int temperature;
    int pressure;

   
    cout << "Enter the current temperature reading: ";
    cin >> temperature;
    cout << "Enter the current pressure reading: ";
    cin >> pressure;

    
    if (temperature >= 100 || pressure >= 200) {
        cout << "Warning: System is operating in a critical state!" << endl;
    } else {
        cout << "OK: System is operating within normal parameters." << endl;
    }

    return 0;
}
