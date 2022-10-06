/**
 * @file morechar.cpp -- the char type and int type contrasted
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M'; // assign ASCII
    int i = ch;    // store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch ++ ;
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    //using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch):";
    cout.put(ch) << endl;

    //using the cout.put() to display a char constant
    cout.put('x');
    cout << endl << 'x';

    cout << endl << "Done!" << endl << endl;

    char alarm = '\a';
    cout << alarm << "Don't do that again!\a\n";
    return 0;
}