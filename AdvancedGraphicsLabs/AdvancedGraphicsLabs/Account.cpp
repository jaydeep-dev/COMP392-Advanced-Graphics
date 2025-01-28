#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(double Balance)
{
	LAST_NUMBER += 1;
	//Account_Number = (char)&LAST_NUMBER;
	Account_Number = to_string(LAST_NUMBER);
	Account_Balance = Balance;

	cout << "Account: " << Account_Number << " is created with balance: " << Account_Balance << endl;
}

Account::~Account()
{
	cout << "Account: " << Account_Number << " is closed now" << endl;
}

double Account::Get_Balance() const
{
	return Account_Balance;
}

void Account::Print_Info()
{
	cout << "Account: " << Account_Number << " has balance: " << Account_Balance << endl;
}
