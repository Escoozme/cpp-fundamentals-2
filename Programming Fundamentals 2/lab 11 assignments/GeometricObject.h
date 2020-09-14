#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>

using namespace std;

class GeometricObject {
public:
    GeometricObject() {
        color = "white";
        filled = false;
    }

    GeometricObject(const string& color, bool filled) {
        this->color = color;
        this->filled = filled;
    }

    string getColor() const {
        return color;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    bool isFilled() const {
        return filled;
    }

    void setFilled(bool filled) {
        this->filled = filled;
    }

    string toString() const {
        return "Geometric Object";
    }

private:
    string color;
    bool filled;
};

#endif
