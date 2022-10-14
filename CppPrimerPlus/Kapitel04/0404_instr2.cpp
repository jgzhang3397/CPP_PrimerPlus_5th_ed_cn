/**
 * @file 0403_instr1.cpp -- reading more than one word with getline
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.getline(name, ArSize);

    cout << "Enter your favorite dessert: \n";
    cin.getline(dessert, ArSize);
    
    cout << "I have some delicious " << dessert;
    cout << " for you. " << name << ".\n";

    return 0;
}