/**
 * @file exe_01_showNameAddress.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

int main()
{
    using namespace std;
    cout << "Show me your name and address please!"<< endl;

    int number;

    cin >> number;

    if(number==1)
    {
        cout << "Vorname, Nachname!"<< endl;
        cout << "Address:...."<< endl;
    }
    return 0;
}