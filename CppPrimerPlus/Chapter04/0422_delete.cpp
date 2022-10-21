/**
 * @file 0422_delete.cpp -- using the delete operator
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring> 
using namespace std;
char * getname(void); // function prototype

int main()
{
    char* name; // create pointer but no storage
    name = getname(); // assign address of string to name
    cout << name << " at " << (int *)name << endl;
    delete [] name; // memory freed

    name = getname(); // reuse freed memory
    cout << name << " at " << (int *)name << endl;
    delete [] name; // memory freed again
    return 0;
}

char * getname() // return pointer to new string
{
    char temp[80]; // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // copy temp to pn, copy string into smaller space

    return pn; // temp lost when function ends
}