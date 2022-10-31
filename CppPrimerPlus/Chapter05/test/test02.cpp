/**
 * @file test02.cpp -- input your nums and sum it
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int x, sum = 0;
    do
    {
        cin >> x;

        sum += x;
        cout << sum << endl;

    }while(x);
    
    return 0;
}