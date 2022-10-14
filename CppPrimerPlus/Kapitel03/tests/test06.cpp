/**
 * @file test06.cpp -- kilometers convert to miles liter to gallons
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
    const double Hundredkilo_to_miles = 62.14;
    const double Gallon_to_liters = 3.875;

    cout << "Amount of gasoline consumed per 100 kilometer (liters): ____\b\b\b\b";
    double consum_kilo_liter;
    cin >> consum_kilo_liter;

    double my_gallons;
    my_gallons = consum_kilo_liter/Gallon_to_liters;
    cout << "The mileage per gallon is: " 
         << Hundredkilo_to_miles / my_gallons << endl;


    return 0;
}