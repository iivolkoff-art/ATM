#include <iostream>
#include "ATM.h"
using namespace std;


ATM::ATM(string pin) {
	if (this->pin != pin) {
		cout << "Invalid PIN" << endl;
		exit(EXIT_FAILURE);
	}
}

void ATM::ShowInf() {
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << endl;
}

void ATM::WithdrawMoney(double amount) {
	if (amount > balance) {
		cout << "Not enough money" << endl;
	}
	else {
		balance -= amount;
	}
}

void ATM::AddBalance(double amount) {
	balance += amount;
}

void ATM::ChangePin(string newPin) {
	pin = newPin;
}

void ATM::ChangeName(string NewName) {
	name = NewName;
}

void ATM::TransferMoney(ATM& atm, double amount) {
	if (amount > balance) {
		cout << "Not enough money" << endl;
	}
	else {
		balance -= amount;
		atm.AddBalance(amount);
	}
}