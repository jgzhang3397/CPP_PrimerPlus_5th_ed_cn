/**
 * @file 0601_if.cpp -- using the if statement
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
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') // quit at end of sentence
    {
        if(ch == ' ') // check if ch is a space
            ++spaces;
        ++total; // done everytime
        cin.get(ch); 
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}