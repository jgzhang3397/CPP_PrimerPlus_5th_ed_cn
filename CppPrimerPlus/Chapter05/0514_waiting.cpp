/**
 * @file 0514_waiting.cpp -- using clock() in a time-delay loop
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <ctime> // describes clock() function, clock_t type

int main()
{
    using namespace std;
    cout << "Enter the delay time in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    cout << delay << endl;
    cout << start << endl;
    while(clock() - start < delay) // wait until time elapses
       ; // note the semicolon
    cout << "done \a\n";
    return 0;

}