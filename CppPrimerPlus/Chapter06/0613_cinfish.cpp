/**
 * @file 0613_cinfish.cpp -- non-numeric input terminates loop
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
    double fish[Max];
    cout << "Please enter the weights og your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while(i < Max && cin >> fish[i])
    {
        if(++i < Max)
            cout << "fish #" << i+1 << ": ";
    }

    // calculate average
    double total = 0.0;
    for(int j = 0; j<i; j++)
        total += fish[j];
    
    // report results
    if(i == 0)
        cout << "No fish\n";
    else
        cout << total/i << " = average weight of " << i << " fish\n";
    cout << "Done.\n";
    return 0;
}