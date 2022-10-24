/**
 * @file 0502_num_test.cpp -- use numeric in for loop
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for(i = limit; i; i--)
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;
    return 0;
}