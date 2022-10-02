#pragma once
#include <iostream>
using namespace std;

class ATM {
private:
	double balance = 0;
	string name = "None";
	string pin = "1234";
public:
	ATM(string pin);
	void ShowInf();
	void WithdrawMoney(double amount);
	void AddBalance(double amount);
	void ChangePin(string newPin);
	void ChangeName(string NewName);
	void TransferMoney(ATM& atm, double amount);
};