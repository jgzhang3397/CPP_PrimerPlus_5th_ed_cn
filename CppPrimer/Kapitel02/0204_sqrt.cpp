/**
 * @file 0204_sqrt.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    
    cout << "Enter the floor area, in square feet, of your home: ";
    cin  >> area;

    double side;

    side = sqrt(area);

    cout <<"That's the equivalent of a square ";
    cout << side;
    cout <<" feet to the side."<< endl;
    cout <<"How fascinating!"<< endl;

    return 0;
}