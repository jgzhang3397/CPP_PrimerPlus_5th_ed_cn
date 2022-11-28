/**
 * @file test05.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-28
 * 
 * @copyright Copyright (c) 2022
 * 5. The Kingdom of Neutronia, where the unit of currency is the tvarp, 
 * has the following income tax code:
 * 
 * first 5,000 tvarps: 0% tax 
 * next 10,000 tvarps: 10% tax 
 * next 20,000 tvarps: 15% tax tvarps 
 * after 35,000: 20% tax
 * 
 * For example, someone earning 38,000 tvarps would owe 
 * 5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.
 * 
 * Write a program that uses a loop to solicit incomes and to report tax owed.
 * 
 * The loop should terminate when the user enters a negative number or nonnumeric input. 
 */

#include <iostream>

using namespace std;
int income_after_tax(int);

int main()
{
    cout << "Please enter your income in tvarps: ";
    int income;
    int tax;
    int income_after_tax;
    cin >> income;
    while (1)
    {
        if(income >= 0 && income <= 5000)
        {
            tax = 0;
            income_after_tax = income - tax;
            break;
        }
        else if(income > 5000 && income <= 15000)
        {
            tax = (income - 5000) / 10;
            income_after_tax = income - tax;
            break;
        }
        else if(income > 15000 && income <= 35000)
        {
            tax = (income - 15000) * 15 / 100 + 10000 / 10;
            income_after_tax = income - tax;
            break;
        }
        else if(income > 35000)
        {
            tax = (income - 35000) * 20 / 100 + 10000 / 10 + 20000 * 15 / 100;
            income_after_tax = income - tax;
            break;
        }
        else
        {
            cout << " error, please enter it again: ";
            cin >> income;
            continue;
        }
    }

    cout << "You should pay for tax: " << tax << " tvarps\n";
    cout << "and now you have only " << income_after_tax << " tvarps\n";
    
    return 0;
}
