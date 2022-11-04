/**
 * @file 0604_or.cpp -- using the logical operator
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    cout << "This program may reformat your hard disk\n"
         "and destroy all your data.\n"
         "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if(ch == 'y' || ch == 'Y')// y or Y
        cout << "You were warned!\a\a\n";
    else if(ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye\n";
    else 
        cout << "That wasn't a y or an n, so I guess I'll "
            "trash your disk anyway.\a\a\a\n";
    return 0;
}