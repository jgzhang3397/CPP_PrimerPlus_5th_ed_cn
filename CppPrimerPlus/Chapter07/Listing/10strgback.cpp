/**
 * @file 10strgback.cpp -- a function that returns a pointer to char
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

char * buildstr(char c, int n); // prototype

int main()
{
    int times;
    char ch;

    cout << "Enter a character: "; 
    cin >> ch;
    cout << "Enter an integer: "; 
    cin >> times;

    char * ps = buildstr(ch, times);
    cout << ps << endl;

    /*
    The disadvantage to this kind of design 
    (having a function return a pointer to memory allocated by new) 
    is that it makes it the programmer’s responsibility to remember to use delete.
    */
    delete [] ps; // free memory
    
    ps = buildstr('+', 20); // reuse pointer
    cout << ps << "-DONE-" << ps << endl;

    delete [] ps; // free memory
    return 0;
}

// builds string made of n c characters
/**
 * @brief 
 * 
 * @param c 
 * @param n 
 * @return char* 
 * To create a string of n visible characters,
 * you needs to rage for n + 1 characters in order to have space for the null character.
 * So the function in Listing7.10 asks for n + 1 bytes to hold the string. 
 * Next, it sets the final byte to the null character. 
 * Then, it fills in the rest of the array from back to front.
 * 
 * The reason for filling the string from back to front instead of front to back
 * is to avoid using an additional variable.
 */
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0'; // terminate string
    while (n-- > 0)
        pstr[n] = c; // fill rest of string
    return pstr;
}




