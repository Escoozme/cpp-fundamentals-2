//counts the occurrence of given numbers between 1 and 100
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    int mainList[SIZE] = { 0 };
    int numberOfNumbers[SIZE] = { 0 };
    int i = 0;
    int k = 0;
    int p = 0;
    int addOne = 1;

    cout << "Enter up to 100 numbers between 1 and 100. Enter 0 to end input." << endl;

    //Enter up to 100 integer values
    for(i = 0; i < SIZE; ++i){
        cin >> mainList[i];
        if(mainList[i] == 0){
            break;
        }
    }

    for(k = 0; k < SIZE; ++k){
        for(p = 0; p < SIZE; ++p){
            if(mainList[p] == addOne){
                ++numberOfNumbers[k];
            }
        }
        ++addOne;
    }

    for(k = 0; k < SIZE; ++k){
        if(numberOfNumbers[k] != 0 && numberOfNumbers[k] == 1){
            cout << k+1 << " occurs " << numberOfNumbers[k] << " time" << endl;
        }
        else if(numberOfNumbers[k] != 0 && numberOfNumbers[k] != 1){
            cout << k+1 << " occurs " << numberOfNumbers[k] << " times" << endl;
        }
    }

    return 0;
}
