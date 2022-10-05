/**
 * @file 0203_getinfo.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin  >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you have "<< carrots << " carrots. "<< endl;
    return 0;
}
