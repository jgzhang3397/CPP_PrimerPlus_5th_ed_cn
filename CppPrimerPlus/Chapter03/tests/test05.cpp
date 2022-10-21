/**
 * @file test05.cpp -- miles to gallon
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
    cout << "Enter the drived miles : ___\b\b\b";
    int my_miles;
    cin >> my_miles;

    cout << "Enter the fuel consumption in gallon : __\b\b";
    int my_consum;
    cin >> my_consum;

    cout << "The mileage per gallon is: " << float(my_miles/my_consum);

    return 0;
}