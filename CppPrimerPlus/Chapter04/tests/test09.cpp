/**
 * @file test09.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    CandyBar snackAr[3] =
    {
        {"Blow Pops", 19.9, 1000},
        {"Chuao", 8.9, 700},
        {"Fizzies Candy", 17.9, 1300}
    };
    cout << snackAr[0].brand << " weighed " << snackAr[0].weight 
         << "g and has " << snackAr[0].calorie << " calories" << endl;
    cout << snackAr[1].brand << " weighed " << snackAr[1].weight 
         << "g and has " << snackAr[1].calorie << " calories" << endl;
    cout << snackAr[2].brand << " weighed " << snackAr[2].weight 
         << "g and has " << snackAr[2].calorie << " calories" << endl;
    return 0;
}