//Checks if a string is a palindrome.
//Ignores anything that isn't a letter or number.
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& s) {
    for(int f = 0, b = s.length() - 1; f < b; ++f, --b) {
        if(s[f] != s[b]) {
            return false;
        }
    }
}

int main() {
    string palindrome;

    cout << "Enter a string: ";
    getline(cin, palindrome);
    cout << endl;

    for(int i = 0; i < palindrome.length(); ++i) {
        if(isalpha(palindrome[i]) || isdigit(palindrome[i])) {
            palindrome[i] = tolower(palindrome[i]);
        }
        else {
            palindrome.erase(i, 1);
            --i;
        }
    }

    if(isPalindrome(palindrome)) {
        cout << "That is a palindrome. Nice." << endl;
    }
    else {
        cout << "That is NOT a palindrome!" << endl;
    }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
