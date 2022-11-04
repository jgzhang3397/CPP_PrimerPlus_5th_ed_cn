/**
 * @file 0602_ifelse.cpp -- using the if else statement
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    char ch;

    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            cout << ch; // done if newline
        else
            cout << ch; // done otherwise ch++ or ch+1 something
        cin.get(ch);
    }
    cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}