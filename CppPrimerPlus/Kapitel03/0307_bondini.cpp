/**
 * @file 0307_bondini.cpp -- using escape sequences
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
    cout << "Operation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:____\b\b\b\b";
    long code;
    cin >> code;
    cout << "You entered "<< code << endl;
    cout << "Code verified! Proceed with Plan z3!\n";
    
    return 0;
}
