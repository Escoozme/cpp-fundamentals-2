//Finding out if two arrays are identical to each other. List size is a maximum of 20.
#include <iostream>
using namespace std;
bool isEqual(const int list1[], const int list2[], int size){
    for(int indexOne = 0; indexOne < size; ++indexOne){
        int accumulatorOne = 0;
        int accumulatorTwo = 0;

        for(int indexTwo = 0; indexTwo < size; ++indexTwo){
            if(list1[indexTwo] == list1[indexOne]){
                ++accumulatorOne;
            }

            if(list2[indexTwo] == list1[indexOne]){
                ++accumulatorTwo;
            }
        }
        if(accumulatorOne != accumulatorTwo){
            return false;
        }
    }
}

int main(){
    int sizeOfLists = 0;

    cout << "Enter the size of the lists using a number between 1 and 20: ";
    cin >> sizeOfLists;
    if(sizeOfLists < 1 || sizeOfLists > 20){
        return 0;
    }

    cout << "Enter list1: ";
    int listOne[sizeOfLists];
    for(int counter = 0; counter < sizeOfLists; ++counter){
        cin >> listOne[counter];
    }
    cout << "Enter list2: ";
    int listTwo[sizeOfLists];
    for(int counter = 0; counter < sizeOfLists; ++counter){
        cin >> listTwo[counter];
    }

    if(isEqual(listOne, listTwo, sizeOfLists)){
        cout << "The two lists are identical." << endl << endl;
    }
    else{
        cout << "The two lists are not identical." << endl << endl;
    }

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
