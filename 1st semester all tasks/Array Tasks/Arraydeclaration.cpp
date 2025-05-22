#include<iostream>
#include<string>
using namespace std;
struct student{
	string name;
	int roll;
	float CGPA;
};

int main(){
	student s1;
	s1.name ="abdullah";
	s1.roll =20;
	s1.CGPA =3.65;
	cout<<"name :"<<s1.name<<endl;
	cout<<"age :"<<s1.roll<<endl;
	cout<<"CGPA :"<<s1.CGPA<<endl;
	return 0;
	
}
