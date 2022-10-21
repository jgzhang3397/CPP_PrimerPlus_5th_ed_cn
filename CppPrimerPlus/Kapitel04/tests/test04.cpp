/**
 * @file test04.cpp 
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
    string f_name;
    string l_name;

    cout << "Enter your first name: ";
    getline(cin, f_name);

    cout << "Enter your last name: ";
    getline(cin, l_name);

    cout << "Here's the information in a single string: " << l_name << ", " << f_name <<  endl;
    return 0;
}