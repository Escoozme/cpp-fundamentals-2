#include <iostream>

using namespace std;

class RangeException {
public:
    int mini, maxi, violate;

    RangeException(int mini, int maxi, int violate) {
        this->mini = mini;
        this->maxi = maxi;
        this->violate = violate;
    }
};

void verify(int min, int max) {
    int violating;
    while(cin >> violating) {
        if(violating < min || violating > max) {
            throw RangeException(min, max, violating);
        }
    }
}

int main() {
    int mini = 1, maxi = 10;

    try {
        verify(mini, maxi);
    }
    catch(RangeException A) {
        cout << A.violate << " is not between " << A.mini << " and " << A.maxi << endl;
    }

    return 0;
}
