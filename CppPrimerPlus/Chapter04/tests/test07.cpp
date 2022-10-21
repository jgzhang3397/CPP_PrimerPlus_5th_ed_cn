/**
 * @file test07.cpp
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

struct analysis_pizza
{
    string company;
    float diameter;
    float weight;
};

int main()
{
    analysis_pizza pizza;
    cout << "Enter the name of pizza company: ";
    getline(cin, pizza.company);
    cout << "Enter the diameter of pizza in unit [cm]: ";
    cin >> pizza.diameter;
    cout << "Enter the Weight of pizza in unit [g] ";
    cin >> pizza.weight;

    cout << "The pizza from " << pizza.company << " is " << pizza.diameter 
         << " cm, and the Weight is " << pizza.weight << "g " << endl;

    return 0;
}