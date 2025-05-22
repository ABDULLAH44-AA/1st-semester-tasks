#include <iostream>
using namespace std;

int main() {
    float totalMarks, obtainedMarks, percentage;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+";
    else if (percentage >= 80)
        cout << "Grade: A";
    else if (percentage >= 70)
        cout << "Grade: B";
    else if (percentage >= 60)
        cout << "Grade: C";
    else if (percentage >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: F (Fail)";

    return 0;
}
