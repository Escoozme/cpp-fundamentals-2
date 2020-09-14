#include <iostream>
using namespace std;

int main()
{
  char x = 'a';
  char y = 'c';

  cout << ++x << endl;
  cout << y++ << endl;
  cout << (x - y) << endl << endl;

  cout << ('a' < 'b') << endl;
cout << ('a' <= 'A') << endl;
cout << ('a' > 'b') << endl;
cout << ('a' >= 'A') << endl;
cout << ('a' == 'a') << endl;
cout << ('a' != 'b') << endl;

  return 0;
}
