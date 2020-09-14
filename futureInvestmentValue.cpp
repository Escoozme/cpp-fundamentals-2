//futureInvestmentValue = investmentAmount x (1 + monthlyInterestRate)^numberOfYears*12
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    double result;

    result = investmentAmount * pow((1 + monthlyInterestRate), (years*12));

    return result;
}

int main() {
    double investment, interestRate;
    int i;

    cout << "Enter investment amount: ";
    cin >> investment;
    cout << "Enter interest rate: ";
    cin >> interestRate;

    interestRate /= 12;

    cout << setw(7) << left << "Years" << "Future Value" << endl;

    for(i = 1; i <= 30; ++i){
        cout << setw(7) << left << i << fixed << setprecision(2) << futureInvestmentValue(investment, interestRate, i) << endl;
    }

    return 0;
}
