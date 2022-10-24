/**
 * @file 0503_express.cpp -- values of expressions
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x >3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base:: boolalpha); //a newer c++ feature
    cout << (x < 3) << endl;
    cout << (x > 3) << endl;

    return 0;
}