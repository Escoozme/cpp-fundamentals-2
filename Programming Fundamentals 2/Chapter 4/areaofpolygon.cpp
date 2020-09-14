#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sideLength;
    int numberOfSides;
    double area;
    const double PI = 3.14159;

    cout << "Enter number of sides: ";
    cin >> numberOfSides;
    cout << "Enter side length: ";
    cin >> sideLength;

    area = numberOfSides * (sideLength*sideLength) / (4 * tan (PI/numberOfSides));

    cout << area << endl;

    return 0;
}
