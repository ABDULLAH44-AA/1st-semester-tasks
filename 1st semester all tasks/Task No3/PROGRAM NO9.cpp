#include <iostream>
using namespace std;

int main() {
    string names[5] = {"ABDULLAH", "ALI", "KASHAN", "ZEESHAN", "SAJID"};
    int rollNos[5] = {13, 14, 15, 16, 17};

    for (int i = 0; i < 5; i++) {
        cout << names[i] << ": " << rollNos[i] << endl;
    }

    return 0;
}

