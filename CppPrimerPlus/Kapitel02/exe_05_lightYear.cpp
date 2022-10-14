/**
 * @file exe_05_lightYear.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;
void convert_lightYear(double);

int main()
{
    cout << "Enter the number of light years: ";
    
    double year;

    cin >> year;

    convert_lightYear(year);

    return 0;
}

void convert_lightYear(double num)
{
    double result = num* 63240;
    cout << num << " light years = " << result << " astronomical units." << endl;
}