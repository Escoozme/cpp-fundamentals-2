//finding mean and standard deviation of 10 numbers using functions
#include <iostream>
#include <cmath>

using namespace std;

double mean(const double x[], int size) {
    int m = 0;
    double sum = 0;

    for(m = 0; m < size; ++m){
        sum += x[m];
    }

    sum /= size;

    return sum;
}

double deviation(const double x[], int size) {
    int d = 0;
    double stdDev = 0;
    double meanDev = mean(x, size);

    for(d = 0; d < size; d++){
        stdDev += pow(x[d] - meanDev, 2);
    }

    return sqrt(stdDev / (size - 1));
}

int main() {
    const int SIZE = 10;
    int i = 0;
    double numbers[SIZE];

    cout << "Enter 10 numbers:" << endl;
    for (i = 0; i < SIZE; ++i){
        cin >> numbers[i];
    }

    cout << "The mean is " << mean(numbers, SIZE) << endl;
    cout << "The standard deviation is " << deviation(numbers, SIZE) << endl;

    return 0;
}
