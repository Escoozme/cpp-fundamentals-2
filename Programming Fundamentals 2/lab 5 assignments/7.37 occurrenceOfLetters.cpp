#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]){
	for(int i = 0; s[i] != '\0'; ++i){
		if(isalpha(s[i])){
			++counts[(int)s[i] - 'a'];
		}
	}
}

int main(){
    string stringy;
	int counts[26] = { 0 };
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    cout << "Enter a string: ";
    getline(cin, stringy);

    for(int counter = 0; counter < stringy.length(); ++counter){
        stringy[counter] = (char)(tolower(stringy[counter]));
    }

    count(stringy.c_str(), counts);
	for(int i = 0; i < 26; ++i){
        if(counts[i] == 1){
            cout << alphabet[i] << ": " << counts[i] << " time" << endl;
        }
        else if(counts[i] > 1){
            cout << alphabet[i] << ": " << counts[i] << " times" << endl;
        }
	}

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
