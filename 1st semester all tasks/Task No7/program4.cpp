#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
	int s=3;
	cout<<"cutdown timer: /n"<<endl;
	while(s<10){
		cout<<s<<"seconds remaining....."<<endl;
		sleep(1);
		s++;
	}
	cout<<"Time's up!"<<endl;
	return 0;
}