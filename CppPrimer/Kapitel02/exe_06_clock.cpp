/**
 * @file exe_06_clock.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the number of hours: ";
    int hour;
    cin  >> hour;
    cout << "Enter the number of minutes: ";
    int mins;
    cin  >> mins;

    cout << "Time: "<< hour << " : "<< mins << endl;
    return 0;
}