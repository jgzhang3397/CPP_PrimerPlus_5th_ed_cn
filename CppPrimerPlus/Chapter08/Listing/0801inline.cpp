/**
 * @file 0801inline.cpp -- using an inline function
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

// an inline function definition
inline double square(double x){return x * x; }

using namespace std;

int main()
{
    double a, b;
    double c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5); 

    cout << "a = " << a << ", b = " << b << "\n"; 
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n"; 
    cout << "Now c = " << c << "\n";
    return 0;
}