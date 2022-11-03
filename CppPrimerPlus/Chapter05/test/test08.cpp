/**
 * @file test08.cpp -- use string replace char array from test07
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done): " << endl;
    string word;
    cin >> word;
    int count = 0;
    while (word!="done")
    {
        count ++;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words";
    return 0;
}