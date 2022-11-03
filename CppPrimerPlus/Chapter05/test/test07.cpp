/**
 * @file test07.cpp -- char array & do while
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done) :" << endl;
    char array[20];
    cin >> array;

    int count = 0;
    while (strcmp(array, "done"))
    {
        count++;
        cin >> array;
    }
    cout << "You entered a total of " << count << " words";
    
    return 0;
}