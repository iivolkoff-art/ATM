#include "WorkWithATM.h"
#include <iostream>

void WorkWithATM(ATM& atm) {
	system("cls");
	cout << "1. �������� ����������" << endl;
	cout << "2. �������� ������" << endl;
	cout << "3. ����� ������" << endl;
	cout << "4. ��������� ������" << endl;
	cout << "5. ������� ���" << endl;
	cout << "6. ������� ���-���" << endl;
	cout << "7. �����" << endl;
	int choise;
	cin >> choise;
	switch (choise) {
	case 1: {
		atm.ShowInf();
	}
		  break;
	case 2: {
		cout << "������� �����: ";
		int Money;
		cin >> Money;
		atm.AddBalance(Money);
	}
		  break;
	case 3: {
		cout << "������� �����: ";
		int Money;
		cin >> Money;
		atm.WithdrawMoney(Money);
	}
		  break;
	case 4: {
		cout << "������� ������ ������������: ";
		string pin;
		cin >> pin;
		ATM atm2(pin);
		cout << "������� ����� ��� ��������: ";
		int Money;
		cin >> Money;
		atm.TransferMoney(atm2, Money);
		atm2.ShowInf();
	}
		  break;
	case 5: {
		cout << "������� ����� ���: ";
		string NewName;
		cin >> NewName;
		atm.ChangeName(NewName);
	}
		  break;
	case 6: {
		cout << "������� ����� ���-���: ";
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
	cout << "������� ����� ������ ����� ����������";
	system("pause>nul");
	WorkWithATM(atm);
}