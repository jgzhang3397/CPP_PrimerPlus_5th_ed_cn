/**
 * @file 0512_comstr2.cpp -- comparing strings using arrays
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string word = "?ate";

    for(char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    
    return 0;
}