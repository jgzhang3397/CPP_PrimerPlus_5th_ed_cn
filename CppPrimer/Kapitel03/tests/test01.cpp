/**
 * @file test01.cpp -- height convert
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    // 1 foot is equal to 12 inches
    const int Foot_to_inch = 12;
    cout << "Enter your height(Units are inches):__\b\b";

    int my_inches;
    cin  >> my_inches;

    int my_feet;
    my_feet = my_inches / Foot_to_inch ;
    my_inches = my_inches % Foot_to_inch ;
    cout << "Your height is ";
    cout << my_feet << " feet, and ";
    cout << my_inches << " inches\n";
    return 0;
}