/**
 * @file 0518_textin3.cpp -- reading chars to end of file
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
    char ch;
    int count = 0;
    cin.get(ch); // attempt to read a char
    while (cin.fail() == false) //test for EOF
    {
        cout << ch; // echo character
        ++count;
        cin.get(ch); // attempt to read another char
    }
    cout << endl << count << " characters read\n";
    return 0;
    
}