/**
 * @file 0308_floatnum.cpp -- floating-point types
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
    //cout.setf(ios_base::fixed, ios_base::floatfield); // fixed - point
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    cout << "tub = "<< tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = "<< mint << " and a million mints = ";
    cout << million * mint << endl;

    cout << "---------------------------------\n";

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed - point 显示六位小数
    
    cout << "tub = "<< tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = "<< mint << " and a million mints = ";
    cout << million * mint << endl;

    return 0;
}