//sum of numbers in a column using two-dimensional array
#include <iostream>

using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    int s = 0;
    double sum = 0;

    for(s = 0; s < rowSize; ++s){
        sum += m[s][columnIndex];
    }

    return sum;
}

int main() {
    int i = 0;
    int k = 0;
    int rSIZE = 3;
    double matrix[rSIZE][SIZE];

    cout << "Enter a 3-by-4 matrix row by row:" << endl;

    for(k = 0; k < rSIZE; ++k){
        for(i = 0; i < SIZE; ++i){
            cin >> matrix[k][i];
        }
    }

    for(i = 0; i < SIZE; ++i){
        cout << "Sum of the elements at column " << i << " is " << sumColumn(matrix, rSIZE, i) << endl;
    }

    return 0;
}
