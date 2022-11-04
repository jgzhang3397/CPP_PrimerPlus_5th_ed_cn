/**
 * @file 0603_ifelseif.cpp -- using if else if else
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

const int Fave = 27;

int main()
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if(n < Fave)
            cout << "Too low -- guess again: ";
        else if(n > Fave)
            cout << "Too high -- guess again: ";
        else 
            cout << Fave << " is right!\n";
    } while (n != Fave);
    
    return 0;
}