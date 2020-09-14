//Add two matrices, a and b, and save the result in c.
#include <iostream>
#include <iomanip>

using namespace std;

const int N = 3;

void addMatrix(const double a[][N], const double b[][N], double c[][N]) {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    double matrixA[3][N] /*= {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}}*/;
    double matrixB[3][N] /*= {{0, 2, 4},
                            {1, 4.5, 2.2},
                            {1.1, 4.3, 5.2}}*/;
    double matrixC[3][N];

    cout << "Enter matrix 1: ";
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter matrix 2: ";
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> matrixB[i][j];
        }
    }
    cout << endl;

    addMatrix(matrixA, matrixB, matrixC);

    cout << "The addition of the matrices is: " << endl << endl;
    cout << fixed << setprecision(1);
    for(int i = 0; i < N; ++i) {
        cout << "  ";
        for(int j = 0; j < N; ++j) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
