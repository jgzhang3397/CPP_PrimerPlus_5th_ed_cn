/**
 * @file test04.cpp -- time convert
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    const int Convert_factor_min_sec = 60;
    const int Convert_factor_days = 24 * pow(Convert_factor_min_sec, 2);
    cout << "Enter the number of seconds: ";

    unsigned long my_seconds;
    cin >> my_seconds;

    int my_days, my_minutes, remain_seconds, remain_minutes;

    my_days = my_seconds / Convert_factor_days;

    remain_seconds = my_seconds % Convert_factor_days;

    my_minutes = remain_seconds / Convert_factor_min_sec;
    remain_minutes = my_minutes % Convert_factor_min_sec;
    remain_seconds = remain_seconds % Convert_factor_min_sec;

    cout << my_seconds << " seconds = "
         << my_days    << " days, "
         << remain_minutes << " minutes, "
         << remain_seconds << " seconds\n";
    
    return 0;
}