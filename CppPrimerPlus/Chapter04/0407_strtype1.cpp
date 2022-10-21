/**
 * @file 0407_strtype1.cpp -- using the C++ string class
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string> // make string class available

int main()
{
    using namespace std;
    char charr1[20]; // create an empty array
    char charr2[20] = "apple"; // create an initialized array
    string str1;     // create an empty string object
    string str2 = "peach"; // create an initialized string

    cout << "Enter a kind of fruit: ";
    cin  >> charr1;
    cout << "Enter another kind of fruit: ";
    cin  >> str1;   // use cin for input
    cout << "Here are some fruits:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 << endl; // use cout for output
    
    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;
    
    return 0;
}

