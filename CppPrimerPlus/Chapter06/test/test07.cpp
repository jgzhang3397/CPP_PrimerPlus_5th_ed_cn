/**
 * @file test07.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * 7. Write a program that reads input a word at a time until a lone q is entered.
 * 
 *
    The program should then report the number of words that began with vowels, the number
    that began with consonants, and the number that fit neither of those categories.
    One approach is to use isalpha() to discriminate between words beginning with
    letters and those that don’t and then use an if or switch statement to further identify
    those passing the isalpha() test that begin with vowels.

    A sample run might look like this:
    Enter words (q to quit):
    The 12 awesome oxen ambled
    quietly across 15 meters of lawn. q
    5 words beginning with vowels
    4 words beginning with consonants
    2 others
 */

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    // enter words
    cout << "Enter words (q to quit):";
    string word;
    int vowels = 0;
    int consonants = 0;
    int others = 0;

    cin >> word;

    while (word != "q" && word != "Q")
    {
        if(isalpha(word[0]))
        {
            switch(word[0])
            {
                case 'A':
                case 'a':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'O':
                case 'o':
                case 'U':
                case 'u':
                    ++vowels;
                    break;
                default :
                    ++consonants;
                    break;
            }
        }
        else
            ++others;
        
        cin >> word;
    }

    // display the results
    cout << vowels << " words begining with vowels.\n";
    cout << consonants << " words begining with consonats.\n";
    cout << others << " others\n";
    
    
    return 0;
}