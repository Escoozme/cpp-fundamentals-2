//Three numbers sorted by increasing order.
#include <iostream>
using namespace std;
void sort(double &num1, double &num2, double &num3){
    double temp;
    if(num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
}
int main(){
    double number1, number2, number3;

    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;
    cout << endl;

    sort(number1, number2, number3);

    cout << "The three numbers in increasing order are: " << number1 << " " << number2 << " " << number3 << endl << endl;
    cout << endl << "Code by Jacob Smetana" << endl;

    return 0;
}
