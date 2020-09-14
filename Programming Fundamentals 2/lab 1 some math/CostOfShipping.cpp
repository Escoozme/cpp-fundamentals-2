//3. (Cost of shipping) A shipping company uses the following function
//to calculate the cost (in dollars) of shipping based on the weight
//of the package (in pounds).
//       { 3.5, if 0 < w << 1
//c(w) = { 5.5, if 1 < w << 3
//       { 8.5, if 3 < w << 10
//       { 10.5,if 10 < w << 20
//Write a program that prompts the user to enter the weight of the package
//and display the shipping cost. If the weight is greater than 50, display
//a message "the package cannot be shipped."
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double costOfShipping;
    double weightOfPackage;
    bool invalidWeight = false;

    cout << "Enter weight of package in pounds: ";
    cin >> weightOfPackage;

    if(weightOfPackage > 0 && weightOfPackage <= 50){
        if(weightOfPackage <= 1)
            costOfShipping = 3.5;
        else if(weightOfPackage <= 3)
            costOfShipping = 5.5;
        else if(weightOfPackage <= 10)
            costOfShipping = 8.5;
        else
            costOfShipping = 10.5;
    }
    else{
        invalidWeight = true;
    }

    if(invalidWeight == false){
        cout << "Shipping cost: $" << fixed << setprecision(2) << costOfShipping << endl;
    }
    else{
        cout << "The package cannot be shipped." << endl;
    }

    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
