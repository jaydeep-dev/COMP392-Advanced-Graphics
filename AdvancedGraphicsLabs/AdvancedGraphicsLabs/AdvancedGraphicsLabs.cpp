// AdvancedGraphicsLabs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include "AdvancedGraphicsLabs.h"
#include "date.h"

using namespace std;

int main()
{
    //Lab1_Exercise();

    Lab2_Exercise();

    return 0;
}

void Lab2_Exercise()
{
    cout << "\ncreating an anonymous object - 1\n";
    cout << Date(2019) << '\n';
    cout << "\ncreating a named object - 2\n";
    Date d1(2020, 3, 28);
    cout << d1 << '\n';
    cout << "\ncreating another named object - 3\n";
    Date d2(2, 10, 14);
    cout << d2 << '\n';
    cout << "\ncreating another named object - 4\n";
    Date d3 = d1 + d2;
    cout << d1 << " + " << d2 << " = " << d3 << '\n';
    int days = 84;
    //setting a new object to d3
    cout << "\nsetting a new object to an existing variable\n";
    d3 = d2 + days;
    cout << d2 << " + " << days << " = " << d3 << '\n';
    cout << d1 << '\n';
    cout << d2 << '\n';
    cout << d3 << '\n';
}

void Lab1_Exercise()
{
    double monthlySalary = 0.0, annualSalary = 0.0;
    string nameString;
    string salary;

    cout << "Enter your name: ";
    getline(cin, nameString);

    cout << "Enter your monthly salary:";
    getline(cin, salary);

    stringstream salaryStream(salary);
    salaryStream >> monthlySalary;

    cout << "Your name is: " << nameString << " and your annual salary is: " << monthlySalary * 12 << endl;
}
