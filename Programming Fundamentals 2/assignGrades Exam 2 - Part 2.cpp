#include <iostream>

using namespace std;

int main() {
    int numberOfStudents;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    cout << "Enter " << numberOfStudents << " scores: ";
    int grades[numberOfStudents];
    for(int counter = 0; counter < numberOfStudents; ++counter) {
        cin >> grades[counter];
    }

    int best = grades[0];

    for(int counter = 1; counter < numberOfStudents; ++counter) {
        if(best < grades[counter]) {
            best = grades[counter];
        }
    }

    for(int counter = 0; counter < numberOfStudents; ++counter) {
        if(grades[counter] >= best - 10) {
            cout << "Student " << counter << " score is " << grades[counter] << " and grade is A" << endl;
        }
        else if(grades[counter] >= best - 20) {
            cout << "Student " << counter << " score is " << grades[counter] << " and grade is B" << endl;
        }
        else if(grades[counter] >= best - 30) {
            cout << "Student " << counter << " score is " << grades[counter] << " and grade is C" << endl;
        }
        else if(grades[counter] >= best - 40) {
            cout << "Student " << counter << " score is " << grades[counter] << " and grade is D" << endl;
        }
        else {
            cout << "Student " << counter << " score is " << grades[counter] << " and grade is F" << endl;
        }
    }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
