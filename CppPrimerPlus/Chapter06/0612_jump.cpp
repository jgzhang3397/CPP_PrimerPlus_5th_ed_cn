/**
 * @file 0612_jump.cpp -- using continue and break
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

const int ArSize = 80;

int main()
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: \n";
    cin.get(line, ArSize);

    cout << "Complete line:\n" << line << endl;
    cout << "Line through first period:\n";

    for(int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i]; // display character
        if(line[i] == '.') // quit if it's a period
            break;
        if(line[i] != ' ') // skip rest of loop
            continue;
        else
            spaces++;
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    return 0;
}