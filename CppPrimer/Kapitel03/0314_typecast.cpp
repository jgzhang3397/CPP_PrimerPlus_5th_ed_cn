/**
 * @file 0314_typecast.cpp -- forcing type changes
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99; // old C syntax
    coots = int (19.99) + int (11.99); // new C++ syntax
    cout << "auks = " << auks << " , bats = " << bats;
    cout << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    return 0;
}