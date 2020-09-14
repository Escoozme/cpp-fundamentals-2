//Wind-chill formula: twc = 35.74 + 0.6215ta - 35.75v^0.16 + 0.4275tav^0.16
//twc = wind chill, ta = temperature in fahrenheit, v = wind speed
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double temperature;
    double windSpeed;
    double windChill;

    cout << "Enter a temperature between -58F and 41F: ";
    cin >> temperature;
    cout << "Enter a wind speed no less than 2mph: ";
    cin >> windSpeed;

    if(temperature >= -58 && temperature <= 41 && windSpeed >= 2){
        windChill = 35.74 + (0.6215 * temperature) - (35.75 * pow(windSpeed, 0.16)) + (0.4275 * temperature * pow(windSpeed, 0.16));
        cout << endl << "Wind-chill temperature: " << fixed << setprecision(2) << windChill << "F" << endl;
    }
    else{
        cout << endl << "Temperature or wind speed given not within specified parameters." << endl;
    }

    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
