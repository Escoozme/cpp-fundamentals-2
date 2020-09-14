//color mixer
#include <iostream>
using namespace std;
int main(){
    string firstColor, secondColor;
    string red = "red", blue = "blue", yellow = "yellow";
    bool valid = true;
    int counter = 0;

    cout << "The three primary colors are red, blue, and yellow." << endl;
    cout << "Enter two primary colors: ";
    cin >> firstColor >> secondColor;

    for(counter = 0; counter < firstColor.length(); ++counter){
            firstColor[counter] = tolower(firstColor[counter]);
    }
    for(counter = 0; counter < secondColor.length(); ++counter){
            secondColor[counter] = tolower(secondColor[counter]);
    }
    if(firstColor != red && firstColor != blue && firstColor != yellow ||
    secondColor != red && secondColor != blue && secondColor != yellow){
        cout << endl << "Error: must input primary colors." << endl;
        valid = false;
    }
    if(valid == true && firstColor == secondColor){
        cout << endl << "Those colors are the same, fool." << endl;
        valid = false;
    }
    if(valid == true){
        if(firstColor == red && secondColor == blue || firstColor == blue && secondColor == red){
            cout << endl << "Result of mixing " << firstColor << " and " << secondColor << " is purple." << endl;
        }
        else if(firstColor == red && secondColor == yellow || firstColor == yellow && secondColor == red){
            cout << endl << "Result of mixing " << firstColor << " and " << secondColor << " is orange." << endl;
        }
        else if(firstColor == blue && secondColor == yellow || firstColor == yellow && secondColor == blue){
            cout << endl << "Result of mixing " << firstColor << " and " << secondColor << " is green." << endl;
        }
    }
    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
