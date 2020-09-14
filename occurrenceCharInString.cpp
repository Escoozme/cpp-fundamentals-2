//number of occurrences of a specified character in a string
#include <iostream>
#include <string>

using namespace std;

int count(const char s[], char a, int size) {
    int sum = 0;
    int c = 0;

    for(c = 0; c < size; ++c){
        if(a == s[c]){
            ++sum;
        }
    }

    return sum;
}

int main() {
    int SIZE = 0;
    string stringbean;
    char charmander;
    int i = 0;

    cout << "Enter a string: ";
    getline(cin, stringbean);

    cout << "Enter a character: ";
    cin >> charmander;

    SIZE = stringbean.length();
    char fuckthis[SIZE];

    for(i = 0; i < SIZE; ++i){
        fuckthis[i] = stringbean[i];
    }
    cout << charmander << " appears in \"" << stringbean << "\" " << count(fuckthis, charmander, SIZE) << " times" << endl;
    cout << "Size of string: " << SIZE << endl;

    return 0;
}
