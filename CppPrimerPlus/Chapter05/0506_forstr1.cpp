/**
 * @file 0506_forstr1.cpp -- using for with a string
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reserve order
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    
    cout << "\nBye.\n";

    return 0;
}