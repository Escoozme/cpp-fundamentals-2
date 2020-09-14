#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double number = 17.65432;

    cout << setprecision(1) << number << endl;
    cout << setprecision(2) << number << endl;
    cout << setprecision(3) << number << endl;
    cout << setprecision(4) << number << endl;
    cout << setprecision(5) << number << endl;
    cout << setprecision(6) << number << endl;
    cout << setprecision(7) << number << endl << endl;

    cout << fixed << setprecision(2) << setw(10) << number << endl;

    cout << setw(10) << left << "LEFT" << setw(10) << right << "RIGHT" << endl << endl;

    cout << showpoint << 100.0 << endl;

    return 0;
}
