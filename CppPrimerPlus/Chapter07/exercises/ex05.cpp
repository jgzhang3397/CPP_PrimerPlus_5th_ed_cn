/**
 * @file ex05.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 5. Define a recursive function that takes an integer argument and 
 *    returns the factorial of that argument. 
 *    Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0! defined as 1. 
 *    In general, if n is greater than zero, n! = n * (n – 1)!. 
 *    Test your function in a program that uses a loop to allow the user 
 *    to enter various values for which the program reports the factorial.
 */

#include <iostream>
using namespace std;

long double recursive_func(unsigned int );

int main()
{
    int number;
    cout << "Pls enter your number: ";
    while (cin >> number && number >= 0)
    {
        long double result = recursive_func(number);
        cout << "The result of " << number << " factorial is " << result << endl;
        cout << "Your another number is(enter q to quit):";
    }
    cout << "done!" << endl;
    return 0;
}

long double recursive_func(unsigned int x)
{
    if (x == 0)
        return 1;
    else
        return x * recursive_func(x-1);
}
