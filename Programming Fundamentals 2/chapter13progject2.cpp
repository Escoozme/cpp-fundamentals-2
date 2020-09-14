#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream output;

    output.open("Exercise13_1.txt", ios::app);

    for(int i = 0; i < 100; ++i) {
        output << i << " ";
    }

    output.close();

    return 0;
}
