/**
 * @file 0303_hexoct.cpp -- shows hex and octal constants
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 0x42;
    int inseam = 042; //octal integer constant

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << "\n";
    cout << "inseam = " << inseam << endl;

    return 0;
}