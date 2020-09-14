#include <iostream>
#include <iomanip>
using namespace std;
double celsiusToFahrenheit(double celsius){
    return ((9.0 / 5) * celsius + 32);
}
double fahrenheitToCelsius(double fahrenheit){
    return ((5.0 / 9) * (fahrenheit - 32));
}
int main(){
    double startingCelsius = 40;
    double startingFahrenheit = 120;
    int dash = 0;

    cout << setw(8) << right << "Celsius" << setw(13) << right << "Fahrenheit" << setw(5) << right << "|"
         << setw(11) << right << "Fahrenheit" << setw(10) << right << "Celsius" << endl;
    for(dash = 1; dash <= 47; ++dash){
        cout << "-";
    }
    cout << endl;
    cout << setw(8) << right << startingCelsius << setw(13) << right << celsiusToFahrenheit(startingCelsius) << setw(5) << right << "|"
         << setw(11) << right << startingFahrenheit << setw(10) << right << showpoint << setprecision(5) << fahrenheitToCelsius(startingFahrenheit) << endl;

    startingCelsius--;
    startingFahrenheit -= 10;

    while(startingCelsius >= 31 && startingFahrenheit >= 30){
        cout << setw(8) << right << startingCelsius << setw(13) << right << celsiusToFahrenheit(startingCelsius) << setw(5) << right << "|"
             << setw(11) << right << startingFahrenheit << setw(10) << right << fahrenheitToCelsius(startingFahrenheit) << endl;
        startingCelsius--;
        startingFahrenheit -= 10;
    }

    cout << endl << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
