/**
 * @file 0501_forloop.cpp -- introducing the for loop
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int i; //create a counter
    // initialize; test; update
    for(i=0; i<5; i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";
    return 0;
}