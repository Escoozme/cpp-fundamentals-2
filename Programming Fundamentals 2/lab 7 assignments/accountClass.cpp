#include <iostream>
#include <iomanip>

using namespace std;

class Account {
private:
    int id;
    double balance;
    double annualInterestRate;

public:
    Account() {
        id = 0;
        balance = 0;
        annualInterestRate = 0;
    }

	double getId() {
		return id;
	}

	double getBalance() {
		return balance;
	}

	double getAnnualInterestRate() {
		return annualInterestRate;
	}

	void setId(int newId) {
		id = newId;
	}

	void setBalance(double newBalance) {
		balance = newBalance;
	}

	void setAnnualInterestRate(double newAnnualInterestRate) {
		annualInterestRate = newAnnualInterestRate;
	}

    double getMonthlyInterestRate() {
        return balance * (annualInterestRate / 12);
    }

    double withdraw(double amount) {
        balance -= amount;
    }

    double deposit(double amount) {
        balance += amount;
    }
};

int main() {
	Account account1;

	account1.setId(1122);
	account1.setBalance(20000);
	account1.setAnnualInterestRate(.045);

    account1.withdraw(2500);

    cout << fixed << setprecision(2);
    cout << "Balance after withdrawal: $" << account1.getBalance() << endl;
    cout << "Monthly interest after withdrawal: $" << account1.getMonthlyInterestRate() << endl << endl;

    account1.deposit(3000);

    cout << "Balance after deposit: $" << account1.getBalance() << endl;
    cout << "Monthly interest after deposit: $" << account1.getMonthlyInterestRate() << endl << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
