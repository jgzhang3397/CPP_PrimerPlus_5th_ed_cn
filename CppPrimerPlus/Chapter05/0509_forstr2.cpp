/**
 * @file 0509_forstr2.cpp -- reversing an array
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    //physically modify string object
    char temp;
    int i,j;
    for(j = 0, i = word.size() - 1;  j < i;  --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    
    return 0;
}