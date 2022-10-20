/**
 * @file 0420_ptrstr.cpp -- using pointers to strings
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring> // declare strlen(), strcpy()

int main()
{
    using namespace std;
    char animal[20] = "bear"; // animal holds bear
    const char* bird = "wren";// bird holds address of string
    char* ps; // uninitialized

    cout << animal << " and "; // display bear
    cout << bird << endl; // display wren
    // cout << ps << endl; // may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal; // ok if input < 20 chars
    // cin >> ps; // Too horriable a blunder to try; ps doesn't point to allocated point

    ps = animal; //set ps to point to string
    cout << ps << "s!\n"; // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1]; // get new storage
    strcpy(ps, animal); // copy string to new storage
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int*)ps << endl;
    delete [] ps;

    return 0;
}