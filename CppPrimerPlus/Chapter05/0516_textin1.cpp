/**
 * @file 0516_textin1.cpp -- reading chars with a while loop
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
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch; // get a character
    while(ch != '#') // test the character
    {
        cout << ch; // echo the character
        ++count;    // count the character
        cin >> ch;  // get the next character
    }
    cout << endl << count << " characters read\n";
    return 0;
}