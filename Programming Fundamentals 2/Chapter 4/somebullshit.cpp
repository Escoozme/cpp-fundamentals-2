#include <iostream>
using namespace std;
int main()
{
    char c = 'A';
    int i = c;

    float f = 1000.34f;
    int j = f;

    double d = 1000.34;
    int k = d;

    int l = 97;
    char ch = l;

    cout << c << " " << i << " " << f << " " << j << endl << endl;
    cout << d << " " << k << " " << l << " " << ch << endl << endl;

    return 0;
}
