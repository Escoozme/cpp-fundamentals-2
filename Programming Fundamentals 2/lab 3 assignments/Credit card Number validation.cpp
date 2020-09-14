// 37 for American Express
// 4 for Visa
// 5 for MasterCard
// 6 for Discover
// 1. Double every second digit from right to left. If doubling of a digit results in a two-digit number, add the two digits to get a single digit number.
// 2. Now add all single-digit numbers from Step 1.
// 3. Add all digits in the odd places from right to left in the card number.
// 4. Sum the results from Step 2 and Step 3.
// 5. If the result from Step 4 is divisible by 10, the card number is valid; otherwise, it is invalid.
// 4388576018402626

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

// Get the result from step 2
int sumOfDoubleEvenPlace(const string &cardNumber) {
	int sum = 0;

	int length = cardNumber.length();
	for(int i = length - 2; i >= 0; i -= 2) {
		int val = (cardNumber[i] - '0') * 2;
		if(val >= 10) {
			string valStr = to_string(val);
			val = (valStr[0] - '0') + (valStr[1] - '0');
		}

		sum += val;
	}

	return sum;
}

// Return sum of odd-place digits in the card number
int sumOfOddPlaces(const string &cardNumber) {
    int sum = 0;

	int length = cardNumber.length();
	for(int i = length - 1; i >= 0; i -= 2) {
		sum += cardNumber[i] - '0';
    }

    return sum;
}

// Return true if substr is the prefix for cardNumber
bool startsWith(const string &cardNumber) {
	return cardNumber[0] == '4' || cardNumber[0] == '5' || cardNumber[0] == '6' || (cardNumber[0] == '3' && cardNumber[1] == '7');
}

// Return true if card number is valid
bool isValid(const string &cardNumber) {
	if(cardNumber.length() < 13 || cardNumber.length() > 16 || startsWith(cardNumber) == false) {
		return false;
	}

	int evenSum = sumOfDoubleEvenPlace(cardNumber);
	int oddSum = sumOfOddPlaces(cardNumber);
	int sumSum = evenSum + oddSum;

	return sumSum % 10 == 0;
}

int main() {
    string number;

    cout << "Enter a credit card number: ";
    cin >> number;

	if(isValid(number)) {
		cout << number << " is valid. Good for you." << endl;
	} else {
		cout << number << " is invalid. Faggot." << endl;
	}

    return 0;
}
