/**
 * @file test03.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int Arsize = 20;
    char f_name[20];
    char l_name[20];

    cout << "Enter your first name: ";
    (cin >> f_name).get();

    cout << "Enter your last name: ";
    cin.getline(l_name, Arsize);

    cout << "Here's the information in a single string: " << l_name << ", " << f_name <<  endl;
    
    return 0;
}