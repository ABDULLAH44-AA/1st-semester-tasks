#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main(){
	ofstream file("test.text");
	file<<"students name (abdullah sahil zeeshan)"<<endl;
	remove("test.text");
	return 0;	
}