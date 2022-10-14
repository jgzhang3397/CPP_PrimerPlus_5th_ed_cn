/**
 * @file 0413_arrstruc.cpp -- an array of structances
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

struct inflatable 
{
    char name[20];
    float voulme;
    double price;
};

int main()
{
    using namespace std;
    inflatable guests[2] = // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99}, // first structure in array
        {"Godzilla", 2000, 565.99} // second structure in array
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].voulme + guests[1].voulme << " cubic feet.\n";
    return 0;
}