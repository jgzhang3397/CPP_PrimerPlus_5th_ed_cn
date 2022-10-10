/**
 * @file 0313_assign.cpp -- type changes on assignment
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
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; // int converted to float
    int guess = 3.9822; // float converted to int
    int debt = 7.2E+12;  // result not defined in c++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}