#include <iostream>
#include "ATM.h"
#include "WorkWithATM.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");

	cout << "Введите пин код: ";
	string pin;
	cin >> pin;
	ATM atm(pin);

	WorkWithATM(atm);
}




