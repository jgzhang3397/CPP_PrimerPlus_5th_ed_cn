/**
 * @file 0810leftover.cpp -- overloading the left() function
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
    char * trip = "Hawaii!!";
    unsigned long n = 12345678;

    int i;
    char * temp;

    for(i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp; // point to temporary storage
    }
    return 0;
}

// This function returns the first ct digits of the number num.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;
    if (ct == 0 || num == 0) 
        return 0; // return 0 if no digits

    while(n /= 10)
        digits++;

    if(digits > ct)
    {
        ct = digits - ct;
        while(ct--)
            num /= 10;
        return num; // return left ct digits
    }
    else
        return num; // if ct >= number of digits return the whole number

}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string. 
char * left(const char * str, int n)
{
    if(n < 0) 
        n = 0;
    char * p = new char[n+1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i]; // copy characters
    while (i <= n)
        p[i++] = '\0'; // set rest of string to ‘\0’
    return p;
}