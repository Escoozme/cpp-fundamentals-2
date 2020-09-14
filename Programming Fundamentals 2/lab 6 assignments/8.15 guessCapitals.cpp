#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin;
    string statesCapitals[50][2];
    string answer;
    int correctCount = 0;
    bool nextUpper = false;

    fin.open("States_and_Capitals.dat");

    for(int r = 0; r < 50; ++r) {
        for(int c = 0; c < 2; ++c) {
            getline(fin, statesCapitals[r][c]);
        }
    }

    fin.close();

    cout << "Enter 0 to end." << endl << endl;
    for(int r = 0; r < 50; ++r) {
        cout << "What is the capital of " << statesCapitals[r][0] << "? ";
        getline(cin, answer);

        if(answer == "0") {
            break;
        }

        for(int counter = 0; counter < answer.length(); ++counter) {
            if(counter == 0) {
                answer[counter] = toupper(answer[counter]);
            }
            else if(answer[counter] == ' ') {
                nextUpper = true;
            }
            else if(nextUpper) {
                answer[counter] = toupper(answer[counter]);
                nextUpper = false;
            }
            else {
                answer[counter] = tolower(answer[counter]);
            }
        }

        if(answer == statesCapitals[r][1]) {
            ++correctCount;
        }
        else {
            cout << "The correct answer is " << statesCapitals[r][1] << endl;
        }
    }

    cout << "Correct answers: " << correctCount << endl << endl << endl;

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
