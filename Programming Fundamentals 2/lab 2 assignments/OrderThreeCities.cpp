#include <iostream>
#include <string>
using namespace std;
int main(){
    string city1, city2, city3;
    cout << "Enter the first city: ";
    getline(cin, city1);
    cout << "Enter the second city: ";
    getline(cin, city2);
    cout << "Enter the third city: ";
    getline(cin, city3);
    string first = city1, second = city1, third = city1;

    if(city2 > third){
        third = city2;
    }
    if(city3 > third){
        third = city3;
    }
    if(city2 < first){
        first = city2;
    }
    if(city3 < first){
        first = city3;
    }
    if(city2 > first && city2 < third){
        second = city2;
    }
    if(city3 > first && city3 < third){
        second = city3;
    }

    cout << endl;
    cout << "The three cities in alphabetical order are " << first << ", " << second << ", " << third << endl;

    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
