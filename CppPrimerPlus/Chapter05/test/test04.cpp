/**
 * @file test04.cpp -- Book C++ for fools
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    string months[12] = { 
                "January",
                "February",
                "March",
                "April",
                "May",
                "June",
                "July",
                "August",
                "September",
                "October",
                "November",
                "December"
    };

    int nums;
    int nums_books[12];
    for(int i=0; i<12; i++)
    {
        cout << "Enter the sale of books in ";
        cout << months[i] << ": ";
        cin >> nums;
        nums_books[i] = nums;
    }

    int sum = 0;
    for(int i=0; i<12; i++)
        sum += nums_books[i];
    cout << "The sum of books this year is: " << sum << endl;
    return 0;
}