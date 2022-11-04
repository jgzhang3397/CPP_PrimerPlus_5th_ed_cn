/**
 * @file 0606_more_and.cpp -- using logical AND operator
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
const char * qualify[4] = 
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main()
{
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if(age > 17 && age < 50)
        index = 0;
    else if(age >= 35 && age < 50)
        index = 1;
    else if(age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "You qualify for the " << qualify[index];
    return 0;
}