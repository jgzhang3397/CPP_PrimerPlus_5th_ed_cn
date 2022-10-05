/**
 * @file 0205_ourfunc.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
void simon(int); // function prototype for simon()

using namespace std; // namespace std

int main()
{
    simon(3);

    cout << "Pick an Integer: ";
    
    int count;
    cin  >> count;

    simon(count);

    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes "<< n << " times. " << endl;
}