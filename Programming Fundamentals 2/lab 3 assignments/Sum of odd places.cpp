#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

int sumOfOddPlaces(int n) {
    int sum = 0;

	int length = to_string(n).length();
	for(int i = 0; i < length; i += 2) {
		sum += (int)(abs(n) / pow(10, i)) % 10;
    }

    return sum;
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Sum of digits in odd places of this integer = " << sumOfOddPlaces(number) << endl;
    cout << endl << "Code by Jacob Smetana" << endl;

    return 0;
}
