/**
 * @file test02.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-25
 * 
 * @copyright Copyright (c) 2022
 * 2. Write a program that reads up to 10 donation values into an array of double.
 * The program should terminate input on non-numeric input. 
 * It should report the average of the numbers and 
 * also report how many numbers in the array are larger than the average.
 */

#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;

int main()
{
    // get data
    array<double, MAX> donations; // only double numbers store in array
    cout << "Please enter the 10 donation values: " << endl;
    cout << "You may enter up to " << MAX;
    cout << " values <non-numeric input to terminate>"<< endl;
    cout << "Donation #1: ";
    int i = 0;
    while (i< MAX && cin >> donations[i])
    {
        if(++i < MAX)
            cout << "Donation #" << i+1 << ": ";
    }

    // calculate average
    double total = 0.0;
    for(int j=0; j<i; j++)
    {
        total += donations[j];
    }
    double avg = 0;
    avg = total / i;

    // calculate numbers over the number of average
    int count = 0;
    for(int j = 0; j<i; j++)
    {
        if(donations[j]>avg)
            count++;
    }

    // report values 
    if(i==0)
        cout << "Please enter numberic input.";
    else
    {
        cout << "The average of the array " << avg << endl;
        cout << "The number over the average: " << count << endl;
    }
    
}