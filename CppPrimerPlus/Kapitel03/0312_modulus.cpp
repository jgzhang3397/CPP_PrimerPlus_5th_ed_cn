/**
 * @file 0312_modulus.cpp -- uses % operator to convert lbs to stone
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
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn ;
    int pounds = lbs % Lbs_per_stn ;

    cout << lbs << " pounds are " << stone;
    cout << " stone, " << pounds << " pound(s).\n";
    return 0;
}

