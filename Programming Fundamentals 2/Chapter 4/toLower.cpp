#include <iostream>
#include <cctype>
using namespace std;
int main(){
    cout << "Enter an uppercase letter: ";
    char ch;
    cin >> ch;

    if(isupper(ch)){
        cout << static_cast<char>(tolower(ch)) << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }

    return 0;
}
