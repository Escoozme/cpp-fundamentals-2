//Finding smallest value in an array.
#include <iostream>
using namespace std;
double min(const double array[], int size){
    double minValue = array[0];
    for(int count = 1; count < size; ++count){
        if(array[count] < minValue){
            minValue = array[count];
        }
    }
    return minValue;
}

int main(){
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter ten numbers: ";
    for(int counter = 0; counter < SIZE; ++counter){
        cin >> numbers[counter];
    }

    cout << "The minimum number is " << min(numbers, SIZE) << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
