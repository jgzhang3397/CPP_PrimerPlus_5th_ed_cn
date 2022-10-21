/**
 * @file test05.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calorie;

};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calorie << endl;
    
    return 0;
}