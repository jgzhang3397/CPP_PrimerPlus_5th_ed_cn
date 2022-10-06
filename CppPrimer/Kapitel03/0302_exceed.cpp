/**
 * @file 0302_exceed.cpp -- exceeding some integer limits
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl 
         << "Now ";
    
    sam ++;
    sue ++;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";

    sam --;
    sue --;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited."<< endl << "Lucky Sue!" << endl;
    return 0;
}