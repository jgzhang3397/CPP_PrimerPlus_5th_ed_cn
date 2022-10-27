/**
 * @file 0515_dowhile.cpp -- exit-condition loop
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
    }while (n != 7);
    cout << "Yes, 7 is my favorite.\n";
    return 0;
}