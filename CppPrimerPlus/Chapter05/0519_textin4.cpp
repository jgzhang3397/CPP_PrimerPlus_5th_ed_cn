/**
 * @file 0519_textin4.cpp -- reading chars with cin.get()
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main(void)
{
    using namespace std;
    int ch; // should be int, not char bez eof = -1
    int count = 0;

    while ((ch = cin.get()) != EOF)
    {
        cout.put( char(ch) );// must from int invert to char 
        ++count;
    }
    
    cout << endl << count << " characters read\n";
    
    return 0;
}