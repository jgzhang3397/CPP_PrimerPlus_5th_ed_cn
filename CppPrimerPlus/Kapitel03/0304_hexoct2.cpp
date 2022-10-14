/**
 * @file 0304_hexoct2.cpp -- display values in hex and octal
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal)" << endl;

    cout << hex; // manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal)" << endl;

    cout << oct;
    cout << "inseam = 0" << inseam << " (octal)" << endl;

    return 0;
}