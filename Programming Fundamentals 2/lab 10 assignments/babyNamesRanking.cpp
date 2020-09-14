#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    bool validYear = false;
    int year;
    stringstream ss;
    string yearStr;
    string gender;
    int column;
    string name;
    string fileName = "Babynamesranking";
    string ranking[5];
    bool nameFound = false;
//----------------------------------------------------------------------
    cout << "Enter any year from 2001 to 2010: ";

    while(!validYear) {
        cin >> year;
        (year < 2001 || year > 2010) ? cout << "Must be a year from 2001 to 2010: " : validYear = true;
    }
    ss << year;
    yearStr = ss.str();
//----------------------------------------------------------------------
    cout << "Enter the gender as M or F: ";
    cin >> gender;

    if(islower(gender[0])) {
        gender[0] = toupper(gender[0]);
    }

    while(gender != "M" && gender != "F") {
        cout << "Gender must be entered as M or F: ";
        cin >> gender;
        if(islower(gender[0])) {
            gender[0] = toupper(gender[0]);
        }
    }

    (gender == "M") ? (column = 1, gender = "Boy") : (column = 3, gender = "Girl");
//----------------------------------------------------------------------
    cout << "Enter the name: ";
    cin >> name;
    for(int i = 0; i < name.length(); ++i) {
        (i == 0) ? name[i] = toupper(name[i]) : name[i] = tolower(name[i]);
    }
//----------------------------------------------------------------------
    fileName += yearStr + ".txt";
    ifstream fin(fileName.c_str());

    while(!fin.eof()) {
        for(int c = 0; c < 5; ++c) {
            fin >> ranking[c];
        }
        if(ranking[column] == name) {
            nameFound = true;
            break;
        }
    }
    fin.close();
//----------------------------------------------------------------------
    if(nameFound) {
        cout << gender << " name " << name << " is ranked #" << ranking[0] << " in year " << year << endl;
    }
    else {
        (gender == "Boy") ? gender = "male" : gender = "female";
        cout << "Name not found for " << gender << " babies." << endl;
    }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
