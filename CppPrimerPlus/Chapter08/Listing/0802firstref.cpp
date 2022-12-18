/**
 * @file 0802firstref.cpp -- defining and using a reference
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int rats = 101;
    int & rodents = rats; // rodents is a reference
    cout << "rats: " << rats << endl;
    cout << "rodents: " << rodents << endl;

    rodents++;
    cout << "rats: " << rats << endl;
    cout << "rodents: " << rodents << endl;
    // some implementations require type casting the following addresses to type unsigned
    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;
    return 0;
}