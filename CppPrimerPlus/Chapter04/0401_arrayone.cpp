/**
 * @file 0401_arrayone.cpp -- small arrays of integers
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int yams[3];  // create array with three elements
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    /* static */ int yamscosts[3] = {20, 30, 5}; // create, initialize array

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamscosts[1] << " cents per yam.\n";
    int total = yams[0]* yamscosts[0] + yams[1] * yamscosts[1];
    total = total + yams[2] * yamscosts[2];
    cout << "The Total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof(yams);
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    return 0;
}