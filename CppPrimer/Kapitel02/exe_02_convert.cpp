/**
 * @file exe_02_convert.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int convert_welle(int);

int main()
{
    cout << "Please enter a number of welle: ";

    int num;
    cin  >> num;

    int result;
    result = convert_welle(num);

    cout << "The result is: " << result << endl;

    return 0;
}

int convert_welle(int num)
{
    return num * 220;
}