#include <sstream>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class Complex {
public:
    Complex();
    Complex(double a, double b);
    Complex(double a);
    double getRealPart() const;
    double getImaginaryPart() const;
    Complex add(const Complex& secondComplex) const;
    Complex subtract(const Complex& secondComplex) const;
    Complex multiply(const Complex& secondComplex) const;
    Complex divide(const Complex& secondComplex) const;
    double abs() const;
    string toString() const;
    Complex& operator+=(Complex& secondComplex);
    Complex& operator-=(Complex& secondComplex);
    Complex& operator*=(Complex& secondComplex);
    Complex& operator/=(Complex& secondComplex);
    double& operator[](const int&  index);
    Complex& operator++(); // Prefix ++
    Complex& operator--(); // Prefix --
    Complex operator++(int dummy); // Postfix ++
    Complex operator--(int dummy); // Postfix --
    Complex operator+(); // Unary +
    Complex operator-(); // Unary -
    friend ostream& operator<<(ostream& stream, const Complex& complex);
    friend istream& operator >> (istream& stream, Complex& complex);
private:
    double a;
    double b;
};


// Non-member operator functions
Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);
Complex operator/(const Complex& c1, const Complex& c2);
bool operator<(const Complex& c1, const Complex& c2);
bool operator<=(const Complex& c1, const Complex& c2);
bool operator==(const Complex& c1, const Complex& c2);
bool operator!=(const Complex& c1, const Complex& c2);
bool operator>(const Complex& c1, const Complex& c2);
bool operator>=(const Complex& c1, const Complex& c2);


// Nonmember + function
Complex operator+(const Complex& c1, const Complex& c2) {
    return c1.add(c2);
}
Complex operator-(const Complex& c1, const Complex& c2) {
    return c1.subtract(c2);
}
Complex operator*(const Complex& c1, const Complex& c2) {
    return c1.multiply(c2);
}
Complex operator/(const Complex& c1, const Complex& c2) {
    return c1.divide(c2);
}
bool operator<(const Complex& c1, const Complex& c2) {
    return c1.abs() < c2.abs();
}
bool operator<=(const Complex& c1, const Complex& c2) {
    return c1.abs() <= c2.abs();
}
bool operator==(const Complex& c1, const Complex& c2) {
    return c1.abs() == c2.abs();
}
bool operator!=(const Complex& c1, const Complex& c2) {
    return c1.abs() != c2.abs();
}
bool operator>(const Complex& c1, const Complex& c2) {
    return c1.abs() > c2.abs();
}
bool operator>=(const Complex& c1, const Complex& c2) {
    return c1.abs() >= c2.abs();
}


Complex::Complex() {
    a = 0;
    b = 0;
}
Complex::Complex(double a, double b) {
    this->a = a;
    this->b = b;
}
Complex::Complex(double a) {
    this->a = a;
    this->b = 0;
}
double Complex::getRealPart() const {
    return a;
}
double Complex::getImaginaryPart() const {
    return b;
}
Complex Complex::add(const Complex& secondComplex) const {
    double newA = a + secondComplex.getRealPart();
    double newB = b + secondComplex.getImaginaryPart();

    return Complex(newA, newB);
}
Complex Complex::subtract(const Complex& secondComplex) const {
    double newA = a - secondComplex.getRealPart();
    double newB = b - secondComplex.getImaginaryPart();

    return Complex(newA, newB);
}
Complex Complex::multiply(const Complex& secondComplex) const {
    double newA = a * secondComplex.getRealPart() - b * secondComplex.getImaginaryPart();
    double newB = b * secondComplex.getRealPart() + a * secondComplex.getImaginaryPart();

    return Complex(newA, newB);
}
Complex Complex::divide(const Complex& secondComplex) const {
    double newA = (a * secondComplex.getRealPart() + b * secondComplex.getImaginaryPart()) / (pow(secondComplex.getRealPart(), 2.0) + pow(secondComplex.getImaginaryPart(), 2.0));
    double newB = (b * secondComplex.getRealPart() - a * secondComplex.getImaginaryPart()) / (pow(secondComplex.getRealPart(), 2.0) + pow(secondComplex.getImaginaryPart(), 2.0));

    return Complex(newA, newB);
}
double Complex::abs() const {
    return sqrt(a * a + b * b);
}


// In case your compiler is not C++ 11, use this:
string Complex::toString() const {
    stringstream ss;
    ss << a;

    if (b != 0)
        ss << " + " << b << "i";

    return ss.str();
}
/*
string Complex::toString() const {
    string result = to_string(a); // to_string is a new function in C++ 11
    if (b != 0)
        result += " + " + to_string(b) + "i";

    return result;
}
*/


Complex& Complex::operator+=(Complex& secondComplex) {
    *this = this->add(secondComplex);
    return *this;
}
Complex& Complex::operator-=(Complex& secondComplex) {
    *this = this->subtract(secondComplex);
    return *this;
}
Complex& Complex::operator*=(Complex& secondComplex) {
    *this = this->multiply(secondComplex);
    return *this;
}
Complex& Complex::operator/=(Complex& secondComplex) {
    *this = this->divide(secondComplex);
    return *this;
}


double& Complex::operator[](const int& index) {
    if (index == 0)
        return a;
    else if (index == 1)
        return b;
    else {
        cout << "subscript error" << endl;
        // exit(0);
    }
}


Complex& Complex::operator++() {  // Prefix ++
    a += 1;
    return *this;
}
Complex& Complex::operator--() {  // Prefix --
    a -= 1;
    return *this;
}
Complex Complex::operator++(int dummy) {  // Postfix ++
    Complex temp(a, b);  // Complex temp(*this)
    a += 1;
    return temp;
}
Complex Complex::operator--(int dummy) {  // Postfix --
    Complex temp(a, b);
    a -= 1;
    return temp;
}
Complex Complex::operator+() {  // Unary +
    return *this;
}
Complex Complex::operator-() {  // Unary -
    a *= -1; b *= -1;
    return *this;
}


ostream& operator<<(ostream& out, const Complex& complex) {
    if (complex.b == 0)
        out << complex.a;
    else {
        if (complex.a == 0) {
            if (complex.b == 1)
                out << complex.a << "i";
            else if (complex.b == -1)
                out << complex.a << "-i";
            else
                out << complex.b << "i";
        }
        else {
            if (complex.b == 1)
                out << complex.a << " + i";
            else if (complex.b == -1)
                out << complex.a << " - i";
            else if (complex.b < 0)
                out << complex.a << " - " << -complex.b << "i";
            else
                out << complex.a << " + " << complex.b << "i";
        }
    }

    return out;
}


istream& operator >> (istream& in, Complex& complex) {
    cout << "Enter a and b for (a + bi): ";
    in >> complex.a;
    in >> complex.b;

    return in;
}


int main()
{
    Complex number1;
    cout << "Enter the first complex number: ";
    cin >> number1;

    Complex number2;
    cout << "Enter the second complex number: ";
    cin >> number2;

    cout << "(" << number1 << ")" << " + " << "(" << number2 << ") = " << (number1 + number2) << endl;
    cout << "(" << number1 << ")" << " - " << "(" << number2 << ") = " << (number1 - number2) << endl;
    cout << "(" << number1 << ")" << " * " << "(" << number2 << ") = " << (number1 * number2) << endl;
    cout << "(" << number1 << ")" << " / " << "(" << number2 << ") = " << (number1 / number2) << endl;
    cout << "|" << number1 << "|" << " = " << number1.abs() << endl;
    cout << "|" << number2 << "|" << " = " << number2.abs() << endl;

    number1[0] = 3.4;

    cout << number1++ << endl;
    cout << ++number2 << endl;
    cout << (3 + number2) << endl;
    cout << (number2 += number1) << endl;
    cout << (number2 *= number1) << endl;

    number1 = number2;

    cout << number1 << endl;
    cout << number2 << endl;
    cout << (number1 < number2) << endl;
    cout << (number1 <= number2) << endl;
    cout << (number1 == number2) << endl;
    cout << (number1 != number2) << endl;
    cout << (number1 > number2) << endl;
    cout << (number1 >= number2) << endl;

    return 0;
}
