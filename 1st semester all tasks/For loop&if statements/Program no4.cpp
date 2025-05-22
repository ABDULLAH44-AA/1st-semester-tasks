#include <iostream>
using namespace std;
int main() {
 int age = 20;

 if (age >= 18) {
 cout << "You are an adult." << endl;

 if (age >= 21) {
 cout << "You can drink alcohol." << endl;
 } else {
 cout << "You cannot drink alcohol." << endl;
 }
 } else {
 cout << "You are a minor." << endl;
 }

 return 0;
}