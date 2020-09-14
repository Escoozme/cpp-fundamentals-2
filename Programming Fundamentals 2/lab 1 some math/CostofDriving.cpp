//2. (Cost of driving) Write a program that prompts the user to enter
//the distance to drive, the fuel efficiency of the car in miles per gallon,
//and the price per gallon, and displays the cost of the trip.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double distanceInMiles;
    double milesPerGallon;
    double pricePerGallon;
    double costOfTrip;

    cout << "Enter the distance to drive in miles: ";
    cin >> distanceInMiles;
    cout << "Enter the miles per gallon of the car: ";
    cin >> milesPerGallon;
    cout << "Enter the price per gallon: ";
    cin >> pricePerGallon;
    cout << endl;

    costOfTrip = (distanceInMiles / milesPerGallon) * pricePerGallon;

    cout << "Total cost of gas for the trip: $" << fixed << setprecision(2) << costOfTrip;
    cout << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
