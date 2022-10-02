#include "WorkWithATM.h"
#include <iostream>

void WorkWithATM(ATM& atm) {
	system("cls");
	cout << "1. Показать информацию" << endl;
	cout << "2. Положить деньги" << endl;
	cout << "3. Снять деньги" << endl;
	cout << "4. Перевести деньги" << endl;
	cout << "5. Сменить имя" << endl;
	cout << "6. Сменить пин-код" << endl;
	cout << "7. Выход" << endl;
	int choise;
	cin >> choise;
	switch (choise) {
	case 1: {
		atm.ShowInf();
	}
		  break;
	case 2: {
		cout << "Введите сумму: ";
		int Money;
		cin >> Money;
		atm.AddBalance(Money);
	}
		  break;
	case 3: {
		cout << "Введите сумму: ";
		int Money;
		cin >> Money;
		atm.WithdrawMoney(Money);
	}
		  break;
	case 4: {
		cout << "Ввидите пинкод пользователя: ";
		string pin;
		cin >> pin;
		ATM atm2(pin);
		cout << "Введите сумму для перевода: ";
		int Money;
		cin >> Money;
		atm.TransferMoney(atm2, Money);
		atm2.ShowInf();
	}
		  break;
	case 5: {
		cout << "Введите новое имя: ";
		string NewName;
		cin >> NewName;
		atm.ChangeName(NewName);
	}
		  break;
	case 6: {
		cout << "Введите новый пин-код: ";
		string NewPin;
		cin >> NewPin;
		atm.ChangePin(NewPin);
	}
		  break;
	case 7: {
		exit(EXIT_SUCCESS);
	}
		  break;
	}
	cout << "Нажмите любую кнопку чтобы продолжить";
	system("pause>nul");
	WorkWithATM(atm);
}