/**
 * @file test09.cpp -- 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter number of rows: ";
    
    int num;
    cin >> num;
    char array[num][num];
    for(int i=0; i<num; ++i)
    {
        for(int j=0; j<num; ++j)
        {
            if((i+j)<=3)
                array[i][j] = '.';
            else
                array[i][j] = '*';
            cout << array[i][j];
        }
        cout << endl;
    }

    return 0;
}