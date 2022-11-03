/**
 * @file test06.cpp -- car struct
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

using namespace std;

struct car
{
    string name;
    int year;
};

int main()
{
    int num;
    cout << "How many cars do you wish to catalog? ";
    (cin >> num).get();

    car * my_car = new car [num];
    for(int i=0; i<num; ++i)
    {
        cout << "Car #"<< i+1 << ":"<< endl;
        cout << "Please enter the make:";
        getline(cin, my_car[i].name);
        cout << "Please enter the year made:";
        (cin >> (my_car+i)->year).get();
    }

    cout << "Here is your collection:" << endl;
    for(int i=0; i<num; ++i)
        cout << (my_car+i)->year << " " << (my_car+i)->name << endl;
    return 0;
}