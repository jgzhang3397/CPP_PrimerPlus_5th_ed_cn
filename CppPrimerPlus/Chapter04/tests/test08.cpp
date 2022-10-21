/**
 * @file test08.cpp
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
    analysis_pizza *ps = new analysis_pizza;

    cout << "Enter the diameter of pizza in unit [cm]: ";
    (cin >> ps->diameter).get();

    cout << "Enter the name of pizza company: ";
    getline(cin, ps->company);
    
    cout << "Enter the Weight of pizza in unit [g] ";
    cin >> ps->weight;

    cout << "The pizza from " << ps->company << " is " << ps->diameter 
         << " cm, and the Weight is " << ps->weight <<"g" << endl;
         
    return 0;
}