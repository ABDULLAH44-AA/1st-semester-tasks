#include <iostream>
using namespace std;

int main() {
    char vehicleType;
    int days;

    cout << "Enter vehicle type (M/C/B): ";
    cin >> vehicleType;

    cout << "Enter number of days: ";
    cin >> days;

    if (vehicleType == 'M' || vehicleType == 'm')
        cout << "Total charges: Rs. " << days * 10;
    else if (vehicleType == 'C' || vehicleType == 'c')
        cout << "Total charges: Rs. " << days * 20;
    else if (vehicleType == 'B' || vehicleType == 'b')
        cout << "Total charges: Rs. " << days * 30;
    else
        cout << "APNI AUKAT MAIN REH KAR VEHICLE SELECT KAREIN";

    return 0;
}
