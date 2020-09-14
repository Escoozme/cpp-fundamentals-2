#include <iostream>
#include <cmath>

using namespace std;

class MyPoint {
public:
    MyPoint() {
        x = 0;
        y = 0;
    }
    MyPoint(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }

    double distance(const MyPoint& p2) const {
        return sqrt(pow((x - p2.x), 2) + pow((y - p2.y), 2));
    }

    friend class ThreeDPoint;

private:
    double x, y;
};

class ThreeDPoint: public MyPoint {
private:
    double z;

public:
    ThreeDPoint() {
        x = 0;
        y = 0;
        z = 0;
    }
    ThreeDPoint(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    double getZ() const {
        return z;
    }

    double distance(const ThreeDPoint& p2) const {
        return sqrt(pow((x - p2.x), 2) + pow((y - p2.y), 2) + pow((z - p2.z), 2));
    }

};

int main() {
    ThreeDPoint point1;
    ThreeDPoint point2(10, 30, 25.5);

    cout << point1.distance(point2) << endl;

    return 0;
}
