/**
 * @file ex01.cpp -- Programming Exercises 1
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that repeatedly asks the user to enter pairs of numbers until at least 
 * one of the pair is 0. 
 * For each pair, the program should use a function to calculate the harmonic mean of the numbers. 
 * The function should return the answer to main(), which should report the result. 
 * The harmonic mean of the numbers is the inverse of the average of the inverses 
 * and can be calculated as follows:
 *      harmonic mean = 2.0 × x × y / (x + y)
 */

#include <iostream>
using namespace std;

// function protocoltype 
double cal_harmonic_mean(double num1, double num2);

int main()
{
    double x, y;
    double result;
    cout << "Pls enter two numbers, the numbers could not be null: ";
    while ((cin >> x >> y))
    {
        if(x == 0 || y == 0)
            break;
        result = cal_harmonic_mean(x, y);
        cout << "The harmonic mean of the numbers is : " << result << endl;
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done!" << endl;
    return 0;
}

double cal_harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
