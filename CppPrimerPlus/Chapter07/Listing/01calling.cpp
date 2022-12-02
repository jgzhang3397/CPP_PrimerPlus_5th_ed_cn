/**
 * @file 01Calling.cpp -- defining, prototyping, and calling a function
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

void simple(); // function prototype

int main()
{
    cout << "main() function will call simple() function.\n";
    simple(); // function call

    return 0;
}

void simple()
{
    cout << "I am a simple function.\n";
}