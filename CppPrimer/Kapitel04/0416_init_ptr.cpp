/**
 * @file 0416_init_ptr.cpp -- initialize a pointer
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    return 0;
}