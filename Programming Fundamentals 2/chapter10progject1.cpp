#include <iostream>
#include <string>

using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    if(s1.length() != s2.length()) {
        return false;
    }
    for(int indexOne = 0; indexOne < s1.length(); ++indexOne){
        int accumulatorOne = 0;
        int accumulatorTwo = 0;

        for(int indexTwo = 0; indexTwo < s1.length(); ++indexTwo){
            if(s1[indexTwo] == s1[indexOne]){
                ++accumulatorOne;
            }

            if(s2[indexTwo] == s1[indexOne]){
                ++accumulatorTwo;
            }
        }
        if(accumulatorOne != accumulatorTwo){
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;

    cout << "Enter a string s1: ";
    cin >> s1;
    cout << "Enter a string s2: ";
    cin >> s2;

    if(isAnagram(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    }
    else {
        cout << s1 << " and " << s2 << " are not anagrams" << endl;
    }

    return 0;
}
