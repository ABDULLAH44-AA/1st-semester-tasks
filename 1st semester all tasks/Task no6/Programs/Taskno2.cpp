#include<iostream>
using namespace std;
int main(){
	double savings;
	double expenses;
	cout<<"Enter the savings: ";
	cin>>savings;
	cout<<"Enter the expenses";
	cin>>expenses;
if (savings >= expenses) {
    cout << "Solvent";
    savings = expenses;
    expenses = 0;
} 
else {
    cout << "Bankrupt";
}

}