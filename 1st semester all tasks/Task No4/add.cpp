#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));
	
	int a,b;
	int random_num= rand() %100;
    cout << "Welcome to the Mind Trick Game!" << endl;
    cout << "Think of a number (but don't type it)." << endl;
    a=random_num*2;

    cout << "Step 1: Double your number." << endl;
  

    cout << "Step 2: Now add  to the result." << endl;
   
    cout << "Step 3: Now, half the total." << endl;
   

    cout << "Step 4: Now subtract the original number you thought of." << endl;
    
b=a/2;
    cout << "The number you're left with is... 3!" << endl;
}
