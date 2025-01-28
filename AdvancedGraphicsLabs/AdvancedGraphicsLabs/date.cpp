#include "date.h"


Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::~Date()
{
	cout << "Destructor" << endl;
}

Date Date::operator+(const Date& rhs)
{
	return Date(year + rhs.year, month + rhs.month, day + rhs.day);
}

Date Date::operator+(const int rhs)
{
	return Date(year, month, day + rhs);
}

ostream& operator<<(ostream& os, const Date& date)
{
	return os << "<" << date.year << "-" << date.month << "-" << date.day << ">";
}
