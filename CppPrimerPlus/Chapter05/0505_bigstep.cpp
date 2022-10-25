/**
 * @file 0505_bigstep.cpp -- count as directed
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
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s: \n";
    for(int i = 0; i<100; i += by)
        cout << i << endl;
    
    return 0;
}