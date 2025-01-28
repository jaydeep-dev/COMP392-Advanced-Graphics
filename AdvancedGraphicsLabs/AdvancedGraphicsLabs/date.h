#include <iostream>

using namespace std;

#pragma once
class Date
{
public:
	Date(int year, int month = 1, int day = 1);
	~Date();

	Date operator+ (const Date& rhs);
	Date operator+ (const int rhs); 

	friend ostream& operator<< (ostream& os, const Date& date);

private:
	int year;
	int month;
	int day;
};

