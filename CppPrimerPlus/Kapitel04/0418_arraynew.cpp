/**
 * @file 0418_arraynew.cpp -- using the new operator for arrays
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
    double * p3 = new double [3]; // space for 3 doubles
    p3[0] = 0.2;    // treat p3 like an array name
    p3[1] = 0.5;    
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << endl;
    p3 = p3 +1;     // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << endl;
    p3 = p3 -1; // pointer back to beginning
    delete[] p3; // free the memory

    return 0;
}