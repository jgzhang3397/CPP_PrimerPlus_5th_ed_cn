/**
 * @file 0504_formore.cpp -- more looping with for
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
const int ArSize = 16; // example of external declaration
int main()
{
    double factorials[ArSize];
    factorials[1] = factorials[0] = 1.0;
    int i;
    for(i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for(i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;
    return 0;
}