/**
 * @file test01.cpp -- sum (input1, input2), sum between input1 and input2
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
    int x, y;
    cout << "Enter x and y, x must smaller than y: ";
    cin >> x >> y;

    int sum = 0;
    for(int i=x; i<=y; i++)
        sum += i;
    cout << "The sum of the numbers between x and y " << sum << endl;
    return 0;
}