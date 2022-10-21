/**
 * @file test10.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
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
    CandyBar * p_snack = new CandyBar[3];
    p_snack[0].brand = "apple";
    p_snack[0].weight = 19.0;
    p_snack[0].calorie = 129;

    cout << p_snack[0].brand << " weighed " << p_snack[0].weight 
         << "g and has " << p_snack[0].calorie << " calories" << endl;
/* 
    cout << snackAr[1].brand << " weighed " << snackAr[1].weight 
         << "g and has " << snackAr[1].calorie << " calories" << endl;
    cout << snackAr[2].brand << " weighed " << snackAr[2].weight 
         << "g and has " << snackAr[2].calorie << " calories" << endl;
*/
    
    return 0;
}