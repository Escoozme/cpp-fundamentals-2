//Nine coins are placed in a 3x3 matrix with some face up and some face down. You can
//represent the state of the coins using a 3x3 matrix with values 0 (head) and 1 (tail).
#include <iostream>

using namespace std;

int main() {
    int coinsMatrix[3][3];
    int number;

    cout << "Enter a number between 0 and 511: ";
    cin >> number;
    cout << endl;

    if(number < 0 || number > 511) {
        cout << "Not a valid number." << endl;
        return 0;
    }

    for(int r = 2; r >= 0; --r) {
        for(int c = 2; c >= 0; --c) {
            coinsMatrix[r][c] = number % 2;
            number /= 2;
        }
    }

    for(int r = 0; r < 3; ++r) {
        cout << " ";
        for(int c = 0; c < 3; ++c) {
            (coinsMatrix[r][c] == 0) ? cout << " H" : cout << " T";
        }
        cout << endl;
    }

    cout << endl << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
