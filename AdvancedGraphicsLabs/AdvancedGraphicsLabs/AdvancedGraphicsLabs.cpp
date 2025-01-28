// AdvancedGraphicsLabs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include "AdvancedGraphicsLabs.h"
#include "date.h"
#include "Account.h"
#include "Timer.h"

using namespace std;

int main()
{
    //Lab1_Exercise();

    //Lab2_Exercise();

    Lab3_Exercise();

    return 0;
}

void Lab3_Exercise()
{
    srand(301287487); //use your student number
    const int MAX_BALANCE = 100000;
    const int SIZE = 20; //change this number to investigate performance
    //Week03::Account a1(rand() % MAX_BALANCE);
    //Week03::Account a2(rand() % MAX_BALANCE);
    //Week03::Account a3(rand() % MAX_BALANCE);
    //Week03::Account a4(rand() % MAX_BALANCE);
    //a1.print_info();
    //a2.print_info();
    //a3.print_info();
    //a4.print_info();
    cout << "\nCreating the list of accounts:\n";
    Account** accounts = Create_Accounts(SIZE, MAX_BALANCE);

    //cout << "\nPrinting the list of accounts:\n";
    //Print_Accounts(accounts, SIZE);

    //cout << "\nSorting the list of accounts:\n";
    Sort_Accounts(accounts, SIZE);

    cout << "\nPrinting the list of accounts:\n";
    Print_Accounts(accounts, SIZE);

    cout << "\nDeleting the accounts:\n";
    for (int i = 0;i < SIZE;i++)
    {
        delete(accounts[i]);
    }
}

Account** Create_Accounts(int SIZE, int MAX_BALANCE)
{
    Account** accounts = new Account*[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        accounts[i] = new Account(rand() % MAX_BALANCE);
    }

    return accounts;
}

void Sort_Accounts(Account** Accounts, int size)
{
    // Sorting Logic (ref: https://www.geeksforgeeks.org/bubble-sort-algorithm/)
    Timer timer = Timer();
    bool swapped;
    int SwapCount = 0;

    timer.Start();

    for (int i = 0; i < size; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (Accounts[j]->Get_Balance() > Accounts[j + 1]->Get_Balance()) {
                swap(Accounts[j], Accounts[j + 1]);
                swapped = true;
                SwapCount += 1;
            }
        }

        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }

    auto ms = timer.Stop();

    // Output messages
    cout << "Sorting Accounts" << endl;
    cout << "Swapped Count: " << SwapCount << " and it took: " << ms << " ms!!!!!" << endl;
}

void Print_Accounts(Account* Accounts[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        Accounts[i]->Print_Info();
    }
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
