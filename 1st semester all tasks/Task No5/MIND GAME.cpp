#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Think of a number: ";
    cin >> x;

    int doubled = x * 2;

    int added = doubled + 32;

    int halved = added / 2;

    int result = halved - x;

    cout << "The result is: " << result << endl;

}