/**
 * @file test03.cpp -- latitude in degrees, minutes, and seconds
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
    //cout.setf(ios_base::fixed, ios_base::floatfield);
    const float Convert_factor = 60;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";

    cout << "First, enter the degrees: __\b\b";
    int my_degrees;
    cin >> my_degrees;

    cout << "Next, enter the minutes of arc: __\b\b";
    int my_minutes;
    cin >> my_minutes;

    cout << "Finally, enter the seconds of arc: __\b\b";
    int my_seconds;
    cin >> my_seconds;

    float my_latitude;
    my_latitude = my_degrees 
                  + float (my_minutes/Convert_factor) 
                  + float (my_seconds/pow(Convert_factor, 2.0));

    cout << my_degrees << " degrees, "
         << my_minutes << " minutes, "
         << my_seconds << " seconds = "
         << my_latitude << " degrees\n";
    
    return 0;
}