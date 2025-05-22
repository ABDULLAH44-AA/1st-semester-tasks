#include <iostream>
using namespace std;
int main(){

    int choice;
    double num1, num2, result;

    cout << "Simple Calculator" << endl;
   cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    char op;
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
       case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
          
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl;
            return 1;
    }

    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

}