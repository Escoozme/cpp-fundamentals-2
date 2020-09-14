#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char letterA = 'A';
    char givenLetter;
    int i = 0;
    int k = 0;
    int sum = 0;
    char ALPHABET_[26];
    int NUMBERS_[26];
    bool valid = true;

    cout << "Enter an uppercase letter: ";
    cin >> givenLetter;
    givenLetter = toupper(givenLetter);
    if(!isalpha(givenLetter)){
        cout << "Character given is not a letter." << endl;
        valid = false;
    }
    if(valid == true){
        for(i = 0; i < 26; ++i){
            ALPHABET_[i] = letterA++;
        }
        for(i = 2; i <= 9; ++i){
            if(i != 7 && i != 9){
                for(k = 0; k < 3; ++k){
                    NUMBERS_[sum] = i;
                    ++sum;
                }
            }
            else{
                for(k = 0; k < 4; ++k){
                    NUMBERS_[sum] = i;
                    ++sum;
                }
            }
        }
        for(i = 0; i < 26; ++i){
            if(givenLetter == ALPHABET_[i]){
                break;
            }
        }
        cout << endl << "The corresponding number is " << NUMBERS_[i] << endl;
    }

    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
