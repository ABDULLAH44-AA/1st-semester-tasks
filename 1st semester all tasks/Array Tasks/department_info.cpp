#include<iostream>
#include<string>
using namespace std;
struct Department{
	string Department;
	int No_students;
	int staff;
	char rank;
	int semester;
};

int main(){
	Department SE;
	cout<<"Department name :";
	getline(cin,SE.Department);
	cout<<"Department name :"<<SE.Department<<endl;
	cout<<"Number of students :";
	cin>>SE.No_students; 
	cout<<"Number of students :"<<SE.No_students<<endl;
	cout<<"Staff :";
	cin>>SE.staff;
	cout<<"Staff :"<<SE.staff<<endl;
	cout<<"rank :";
	cin>>SE.rank;
	cout<<"rank :"<<SE.rank<<endl;
	cout<<"Semester :";
	cin>>SE.semester;
	cout<<"Semester :"<<SE.semester<<endl;
	return 0;
	
}