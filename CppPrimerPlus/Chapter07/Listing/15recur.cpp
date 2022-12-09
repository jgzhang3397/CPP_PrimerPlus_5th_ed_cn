/**
 * @file 15recur.cpp -- using recursion
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using namespace std;

void countdown(int n);

int main()
{
    countdown(4); // // call the recursive function
    return 0;
}

void countdown(int n)
{
    cout << "Counting down ... " << n << " (n at " << &n << " ) "<< endl;
    if (n > 0)
        countdown(n-1); // function calls itself 
    cout << n << ": Kaboom!" << " (n at " << &n << " ) "<< endl;;
}