/**
 * @file 0417_use_new.cpp -- using the new operator
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
    int* pt = new int; // allocate space for an int
    *pt = 1001;        // store a value there 
    cout << "int ";
    cout << "value = " << *pt << " : location = " << pt << endl;

    double* pd = new double;// allocate space for a double
    *pd = 10000001.0; //store a double there

    cout << "double ";
    cout << "value = " << *pd << " : location = " << pd << endl;

    cout << "size of pt = " << sizeof(pt);
    cout << ", size of *pt = " << sizeof(*pt) << endl;

    cout << "size of pd = " << sizeof(pd);
    cout << ", size of *pd = " << sizeof(*pd) << endl;
    
    return 0;
}