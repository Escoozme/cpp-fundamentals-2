#include <iostream>
#include <cmath>

using namespace std;

class RegularPolygon {
private:
    int n;       //number of sides of polygon
    double side; //length of side
    double x;    //x-coordinate of center of polygon
    double y;    //y-coordinate of center of polygon

public:
    RegularPolygon() {
        n = 3;
        side = 1;
        x = 0;
        y = 0;
    }

    RegularPolygon(int newN, double newSide) {
        n = newN;
        side = newSide;
        x = 0;
        y = 0;
    }

    RegularPolygon(int newN, double newSide, double newX, double newY) {
        n = newN;
        side = newSide;
        x = newX;
        y = newY;
    }

    int getN() const {
        return n;
    }
    double getSide() const {
        return side;
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }

    void setN(int newN) {
        n = newN;
    }
    void setSide(double newSide) {
        side = newSide;
    }
    void setX(double newX) {
        x = newX;
    }
    void setY(double newY) {
        y = newY;
    }

    double getPerimeter() const {
        return (n * side);
    }

    double getArea() const {
        return ((n * pow(side, 2)) / (4 * tan(M_PI/n)));
    }
};

int main() {
    RegularPolygon poly1;
    RegularPolygon poly2(6, 4);
    RegularPolygon poly3(10, 4, 5.6, 7.8);

    cout << poly1.getPerimeter() << " " << poly1.getArea() << endl;
    cout << poly2.getPerimeter() << " " << poly2.getArea() << endl;
    cout << poly3.getPerimeter() << " " << poly3.getArea() << endl;

    return 0;
}
