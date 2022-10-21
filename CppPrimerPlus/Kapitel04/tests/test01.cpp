/**
 * @file tests01.cpp -- 4.11 program exercise 01
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
    const int Arsize = 20;
    char f_name[Arsize];
    string l_name;
    char letter;
    int age;

    cout << "What is your first name? ";
    cin.getline(f_name, Arsize);
    cout << "What is your last name? ";

    //(cin >> l_name).get();
    getline(cin, l_name);
    
    cout << "What letter grade do you deserve? ";
    cin >> letter;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << char(letter+1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}