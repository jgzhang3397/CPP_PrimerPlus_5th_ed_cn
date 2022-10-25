/**
 * @file 0513_while.cpp -- introducing the while loop
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
const int ArSize = 20;

int main()
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized: \n";
    int i = 0;
    while(name[i] != '\0')
    {
        cout << name[i] << " : " << int(name[i]) << endl;
        i++; // don't forget this step
    }
    return 0;
}