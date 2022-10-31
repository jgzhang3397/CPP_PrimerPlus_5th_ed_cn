/**
 * @file test03.cpp -- the money from Dapne vs the money from Cleo
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    const float money = 100;

    int years = 1;
    float poflit_dapne = 0.1;
    float poflit_cleo = 0.05;

    float money_dapne, money_cleo = 100;
   
    do
    {
        money_dapne = money*(1+poflit_dapne*years);
        money_cleo = money_cleo*(1+poflit_cleo);
        cout << "money from dapne: " << money_dapne << endl;
        cout << "money from cleo: " << money_cleo << endl;
        years ++;
    }while (money_cleo < money_dapne);
    cout << years << endl;
    cout << "money from dapne: " << money_dapne << endl;
    cout << "money from cleo: " << money_cleo << endl;
    return 0;
}