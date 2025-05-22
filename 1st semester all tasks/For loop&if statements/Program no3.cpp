#include<iostream>
using namespace std;
int main(){
int x = 10;
int y = 5;

if (x > 5) { 
    cout << "x is greater than 5"; 
    if (y == 5) { 
        cout << "\ny is equal to 5"; 
    } else { 
        cout << "\ny is not equal to 5"; 
    }
} else { 
    cout << "x is less than or equal to 5"; 
    if (x + y > 10) { 
        cout << "\nx + y is greater than 10"; 
    } else { 
        cout << "\nx + y is less than or equal to 10"; 
    }
}
return 0;
}