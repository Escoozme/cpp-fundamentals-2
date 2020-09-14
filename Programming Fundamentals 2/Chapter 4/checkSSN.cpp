#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string socialSecurityNumber;
    char dash = '-';
    const int SSN_LENGTH = 11;
    int i;
    bool invalid = false;

    cout << "Enter a SSN: ";
    getline(cin, socialSecurityNumber);

    if(socialSecurityNumber.length() != SSN_LENGTH){
        invalid = true;
    }
    if(invalid != true){
        for(i = 0; i < SSN_LENGTH && invalid != true; ++i){
            if(i != 3 && i != 6){
                if(!isdigit(socialSecurityNumber[i])){
                    invalid = true;
                }
            }
            else if(socialSecurityNumber[i] != dash){
                invalid = true;
            }
        }
    }
    if(invalid != true){
        cout << endl << socialSecurityNumber << " is a valid social security number" << endl;
    }
    else{
        cout << endl << socialSecurityNumber << " is an invalid social security number" << endl;
    }

    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
