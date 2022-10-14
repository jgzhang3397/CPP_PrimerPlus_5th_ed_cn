/**
 * @file 0419_addpntrs.cpp -- pointer addition
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
    double wages[3] = {1000.0, 2000.0, 30000.0};
    short  stacks[3] = {3, 2, 1};

    // here are two ways to get the address of an array
    double* pw = wages; // name of an array = address
    short* ps = &stacks[0]; // or use address operator

    // with array element
    cout << "pw = " << pw << " , *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << " , *pw = " << *pw << endl << endl;

    cout << "ps =" << ps << " , *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << " , *ps = " << *ps << endl << endl;

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0];
    cout << ", stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks;
    cout << ", *(stacks + 1) = " << *(stacks +1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    return 0;
}