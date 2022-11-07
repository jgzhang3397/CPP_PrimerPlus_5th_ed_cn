/**
 * @file 0614_cingolf.cpp -- non-numeric input skipped
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;

    // get data

    int golf[Max];

    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for( i= 0; i<Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while(!(cin >> golf[i]))
        {
            cin.clear(); // reset input
            while (cin.get() != '\n')
               continue; // get rid of bad input
            cout << "Please enter a number: ";
        }
            
    }

    // calculate average
    double total = 0.0;
    for(i = 0; i < Max; i++)
        total += golf[i];
    
    // report results
    cout << total/Max << " = average score " << Max << " rounds\n";
    return 0;
}