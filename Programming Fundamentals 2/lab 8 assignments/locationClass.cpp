#include <iostream>

using namespace std;

const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;

class Location {
public:
    int row, column;
    double maxValue;

    Location locateLargest(const double a[][COLUMN_SIZE]) {
        row = 0;
        column = 0;
        maxValue = a[row][column];
        for(int r = 0; r < ROW_SIZE; ++r) {
            for(int c = 0; c < COLUMN_SIZE; ++c) {
                if(a[r][c] > maxValue) {
                    row = r;
                    column = c;
                    maxValue = a[r][c];
                }
            }
        }
    }
};

int main() {
    Location largest1;

    double numbers[ROW_SIZE][COLUMN_SIZE] /*= {{23.5, 35, 2, 10},
                                             {4.5, 3, 45, 3.5},
                                             {35, 44, 5.5, 9.6}}*/;

    cout << "Enter a " << ROW_SIZE << " by " << COLUMN_SIZE << " two-dimensional array: " << endl;
    for(int r = 0; r < ROW_SIZE; ++r) {
        for(int c = 0; c < COLUMN_SIZE; ++c) {
            cin >> numbers[r][c];
        }
    }

    largest1.locateLargest(numbers);

    cout << "The location of the largest element is " << largest1.maxValue << " at (" << largest1.row;
    cout << ", " << largest1.column << ")" << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
