/**
 * @file 07strgfun.cpp -- functions with a string argument
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int c_in_str(const char * str, char ch);

int main()
{
    char mmm[15] = "minimum"; // string in an array

    char *wail = "ululate"; // wail points to string

    int ms = c_in_str(mmm, 'm'); 
    int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl; 
    cout << us << " u characters in " << wail << endl;

    return 0;
}

// this function counts the number of ch characters in the string str

int c_in_str(const char * str, char ch)
{
    int count = 0;
    while (* str) // quit when *str is ‘\0’
    {
        if(*str == ch)
            count++;
        str++; // move pointer to next char
    }

    return count;
    
}