/**
 * @file test01.cpp  
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1. Write a program that reads keyboard input to the @ symbol 
 * and that echoes the input except for digits, 
 * converting each uppercase character to lowercase, and vice versa. 
 * (Don’t forget the cctype family.)
 * 
 */

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    while ((ch = cin.get()) != '@')
    {   
        /* if(0<=ch && ch <=9)
            continue;
        if('A' <= ch && ch <= 'Z')
        {
            cout << char (ch+32);
            count ++;
        }
        else if('a' <= ch && ch <= 'z')
        {
            cout << char (ch-32);
            count ++;
        }
        */
        if(isdigit(ch))
            continue;
        if(islower(ch))
        {
            cout << char(toupper(ch));
            count ++;
        }
        else if (isupper(ch))
        {
            cout << char(tolower(ch));
            count ++;
        }
    }
    cout << "\nechoes the input except for digits " << count << endl;
    return 0;
}