#pragma once
#include <string>

static int LAST_NUMBER = 1000; // static (outside a class) means it's private...

class Account
{
public:
	Account(double Balance);
	~Account();
	double Get_Balance() const;
	void Print_Info();

private:
	std::string Account_Number;
	double Account_Balance;
};

