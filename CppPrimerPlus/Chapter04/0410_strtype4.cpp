/**
 * @file 0410_strtype4.cpp -- line input
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr[20]; 
    string str;
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl; // charr is'nt initialized, so strlen(charr) is random
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str); // cin now an arrgument 参数; no length specifier， string对象根据字符串长度自动调整大小
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}