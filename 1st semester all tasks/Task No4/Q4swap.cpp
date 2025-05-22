
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
