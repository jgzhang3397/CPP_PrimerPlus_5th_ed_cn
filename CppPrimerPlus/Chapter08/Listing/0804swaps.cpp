/**
 * @file 0804swaps.cpp -- swapping with references and with pointers
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

void swapr(int & a, int & b); // a, b are aliases for ints
void swapp(int * p, int * q); // p, q are address for ints
void swapv(int a,int b); // a, b are new variables

int main()
{
    int wallet1 = 300; 
    int wallet2 = 350;

    cout << "Wallet1 = $" << wallet1;
    cout << ", Wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2); // pass variables
    cout << "Wallet1 = $" << wallet1;
    cout << ", Wallet2 = $" << wallet2 << endl;

    cout << "Using pointer to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "Wallet1 = $" << wallet1;
    cout << ", Wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n"; 
    swapv(wallet1, wallet2); // pass values of variables 
    cout << "wallet1 = $" << wallet1;
    cout << ", wallet2 = $" << wallet2 << endl;
    
    return 0;
}

void swapr(int & a, int & b) // uses reference
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int * a, int * b) // uses pointer
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b) // try using values
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}