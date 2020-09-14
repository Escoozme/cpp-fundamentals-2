#include <iostream>
#include <cmath>
#include <iomanip>
#include "GeometricObject.h"

using namespace std;

class Triangle: public GeometricObject {
private:
    double side1, side2, side3;

public:
    Triangle() {
        side1 = 1.0;
        side2 = 1.0;
        side3 = 1.0;
    }

    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    double getSide1() const {
        return side1;
    }
    double getSide2() const {
        return side2;
    }
    double getSide3() const {
        return side3;
    }

    double getArea() const {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter() const {
        return (side1 + side2 + side3);
    }
};

int main() {
    //double sideOne, sideTwo, sideThree;
    string color;
    bool filled;
    double sideOne = 46.7;
    double sideTwo = 36.5;
    double sideThree = 76.911;

    //cout << "Enter the three sides of a triangle: ";
    //cin >> sideOne >> sideTwo >> sideThree;

    cout << "Enter color of triangle: ";
    cin >> color;

    cout << "Filled? 1 for yes, 0 for no: ";
    cin >> filled;

    Triangle triangle1(sideOne, sideTwo, sideThree);

    triangle1.setColor(color);
    triangle1.setFilled(filled);

    cout << endl;
    cout << setw(11) << fixed << setprecision(1) << left << "Area: " << triangle1.getArea() << endl;
    cout << setw(11) << left << "Perimeter: " << triangle1.getPerimeter() << endl;
    cout << setw(11) << left << "Color: " << triangle1.getColor() << endl;
    cout << setw(11) << left << "Filled: " << (triangle1.isFilled() ? "true" : "false") << endl;
    cout << endl;

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
