/**
 * @file exe_03_callFunctions.cpp
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

void func1(void);
void func2(void);
int main()
{
    
    int num;
    for(num=0; num<=1; num++)
    {
        func1();
    }
    while (num)
    {
        func2();
        num--;
    }
    return 0;
}

void func1(void)
{
    cout << "Three blind mice"<< endl;
}

void func2(void)
{
    cout << "See how they run"<< endl;
}