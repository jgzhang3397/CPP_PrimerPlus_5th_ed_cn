/**
 * @file 03twoarg.cpp -- a function with 2 arguments
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

void n_chars(char, int); 

int main()
{
    int times; 
    char ch;

    cout << "Enter a character: ";
    cin >> ch; // cin.get(ch);
    /**
     * 
     * Note that it uses cin >> ch rather than 
     * cin.get(ch) or ch = cin.get() to read a character. There’s a good reason for this.
     * Recall that the two cin.get()functions read all input characters,
     * including spaces and newlines,whereas cin >> skips spaces and newlines.
     */
    while (ch != 'q') // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments

        cout << "\nEnter another character or press the";
        cout << " q-key to quit: ";
        cin >> ch;
    }

    cout << "The values of times is "<< times << endl;
    cout << "Bye\n";
    return 0;
}

void n_chars(char ch, int n) // display ch n times
{
    while (n-- > 0) // continue until n reaches 0 
        cout << ch;
}