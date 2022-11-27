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
#include <cctype>
#include <array>

using namespace std;

int main()
{
    double array[10] = {0.0};
    int num;
    int avg = 0;
    int sum = 0;
    int i = 0; // index of array
    while ((cin >> num).get() && isdigit(num) && i <= 9)
    {
        array[i] = num;
        i++;
    }

    int count = 0;
    for(int j = 0; j<=i; j++)
    {
        sum += array[j];
        avg = sum/i;
        if(array[j] > avg)
            count ++;
    }
    cout << "The average of the numbers :"<< avg << endl;
    cout << "How many numbers in the array are larger than the average :"<< count << endl;
    return 0;
}