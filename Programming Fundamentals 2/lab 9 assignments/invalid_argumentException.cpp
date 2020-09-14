#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <typeinfo>

using namespace std;

class HexFormatException : public runtime_error {
private:
    char ch;

public:
    HexFormatException(char ch) : runtime_error("Not a hex number") {}

    char getCh() {
        return ch;
    }
};

int hexCharToDecimal(char ch) {
    ch = toupper(ch);
    if ('A' <= ch && ch <= 'F') {
        return 10 + ch - 'A';
    }
    else {
        return ch - '0';
    }
}

int hex2Dec(const string& hex) {
    int decimalValue = 0;
    for (unsigned i = 0; i < hex.size(); i++) {
        if(!isalnum(hex[i]) || (isalpha(hex[i]) && toupper(hex[i]) < 'A' || toupper(hex[i]) > 'F')) {
            throw HexFormatException(hex[i]);
        }
        decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
    }

    return decimalValue;
}

int main() {
    cout << "Enter a hex number: ";
    string hex;
    cin >> hex;

    try {
        cout << "The decimal value for hex number " << hex << " is " <<  hex2Dec(hex) << endl;
    }
    catch(HexFormatException& A) {
        cout << A.what() << endl;
    }

    return 0;
}
