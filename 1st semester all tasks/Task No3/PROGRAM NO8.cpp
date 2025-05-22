
#include <iostream>
using namespace std;

void printTable(int num, int Max) {
    for (int i = 1; i <= Max; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

int main() {
    int num = 10;
    int Max = 10;

    cout << "Table of " << num <<" up to "<< Max<< ":" << endl;
    printTable(num, Max);

    return 0;
}

