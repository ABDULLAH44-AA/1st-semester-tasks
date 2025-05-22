#include<iostream>
using namespace std;
int main() {
	int num;
	num=5;
	cout<<"Enter a number: ";
	cin>>num;
	if(num>50) {
		cout<<"The value is greater than 50"<<endl;
		if(num>100) {
			cout<<"The value is greater than 100"<<endl;
		}
	} else {
		cout<<"the value is less than 50"<<endl;
		if(num<0) {
			cout<<"the number is negative"<<endl;
		}
	}


	return 0;
}