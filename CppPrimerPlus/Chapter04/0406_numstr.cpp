/**
 * @file 0406_numstr.cpp -- following number input with line input
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;

    /* 
    cin >> year;
    cin.get();// read newline 
    */
    (cin >> year).get();

    cout << "What is its street address?\n";
    char address[80];

    cin.getline(address, 80);
    cout << "Year build: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}