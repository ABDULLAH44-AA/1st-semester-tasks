
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Movie {
    string title;
    int year;
    string type;
};

int main() {
    Movie movie;

   
    cout << "Enter movie title: ";
    getline(cin, movie.title);
    cout << "Enter movie year: ";
    cin >> movie.year;
    cin.ignore(); 
    cout << "Enter movie type: ";
    getline(cin, movie.type);

   
    ofstream file("action.txt",ios::app);
    file << movie.title << "," << movie.year << "," << movie.type;

    
    ifstream readFile("movies.txt");
    string line;
    while (getline(readFile, line)) {
        cout << "Movie Data: " << line << endl;
    }

    
}



