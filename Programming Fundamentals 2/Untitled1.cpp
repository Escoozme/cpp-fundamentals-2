#include <iostream>
using namespace std;
int main()
{
int subTotal = 10;
double gRate = .15;
double gratuity;
double total;

gratuity = subTotal * gRate;
total = subTotal + gratuity;

cout << gratuity << " " << total << endl;

return 0;
}
