/**
 * @file 0803secref.cpp -- defining and using a reference
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;

int main()
{
    int rats = 101;
    int & rodents = rats; // rodents is a reference

    cout << "rats: " << rats
         << ", rodents: " << rodents << endl;
    
    cout << "rats address: " << &rats
         << ", rodents address: " << &rodents << endl;
    
    int bunnies = 50;
    rodents = bunnies; // can we change the reference?

    cout << "bunnies: " << bunnies
         << ", rats: " << rats
         << ", rodents: " << rodents << endl;
    // But closer inspection reveals that rats also has changed to 50 and 
    // that rats and rodents still share the same address, which differs from the bunnies address.
    cout << "bunnies address: " << &bunnies //0x7ff7b8f4d5ac
         << ", rats address: " << &rats //0x7ff7b8f4d5b8
         << ", rodents address: " << &rodents << endl; //0x7ff7b8f4d5b8
    return 0;
}