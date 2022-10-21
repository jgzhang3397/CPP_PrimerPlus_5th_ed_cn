/**
 * @file test02.cpp -- with string without char[]
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    
    string name;
    string dessert;

    cout << "Enter your name: \n";
    //cin >> name;
    getline(cin, name);

    cout << "Enter your favorite dessert: \n";
    //cin >> dessert;
    getline(cin, dessert);
    
    cout << "I have some delicious " << dessert;
    cout << " for you. " << name << ".\n";

    return 0;
}