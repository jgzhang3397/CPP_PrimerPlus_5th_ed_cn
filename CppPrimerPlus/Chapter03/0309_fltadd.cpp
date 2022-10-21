/**
 * @file 0309_fltadd.cpp -- precision problems with float
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34e+22f;
    float b = a + 1.0f;

    // cout.setf(ios_base::fixed, ios_base::floatfield); // fixed - point 显示六位小数
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}