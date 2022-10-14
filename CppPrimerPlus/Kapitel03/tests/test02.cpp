/**
 * @file test02.cpp -- BMI (Body Mass Index)
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

    const int Foot_to_inches = 12;
    const float Inch_to_meter = 0.0254f;
    const float Kilo_to_pounds = 2.2f;

    cout << "Enter your height in feet and inches please!" << endl;
    cout << "Feet : __\b\b";
    
    int my_feet;
    cin >> my_feet;

    cout << "Inches : __\b\b";
    int my_inches;
    cin >> my_inches;
    
    cout << "Enter your weight in pounds ___\b\b\b";

    int my_weight_pounds;
    cin >> my_weight_pounds;

    my_inches = my_feet * Foot_to_inches + my_inches;

    float my_height_meter;
    my_height_meter = my_inches * Inch_to_meter ;
    cout << "Your height is : " << my_height_meter;

    float my_weight_kilo;
    my_weight_kilo = my_weight_pounds / Kilo_to_pounds;
    cout << " meter, and your weight is : " << my_weight_kilo << " kilogramms\n";

    float my_BMI;
    my_BMI = my_weight_kilo / pow(my_height_meter, 2.0);
    cout << "Your BMI is : " << my_BMI << endl;
    return 0;
}