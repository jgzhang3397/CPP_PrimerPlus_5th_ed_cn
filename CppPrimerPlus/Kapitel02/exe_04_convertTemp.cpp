/**
 * @file exe_04_convertTemp.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

double convertTemp(double);

int main()
{
    double temp;
    cout << "Please enter a Celsius value: ";
    cin  >> temp;

    double result;
    result = convertTemp(temp);

    cout << temp << " degrees Celsius is 68 degrees Fahrenheit."<< endl;
    return 0;
}

double convertTemp(double num)
{
    return num*1.8 + 32.0;
}