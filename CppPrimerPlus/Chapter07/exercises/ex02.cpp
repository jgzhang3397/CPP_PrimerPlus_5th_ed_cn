/**
 * @file ex02.cpp -- 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * 2. Write a program that asks the user to enter up to 10 golf scores,
 *    which are to be stored in an array. 
 *    You should provide a means for the user to terminate input prior to entering 10 scores. 
 *    The program should display all the scores on one line and report the average score. 
 *    Handle input, display, and the average calculation with three separate array processing functions.
 */

#include <iostream>
using namespace std;

void show_scores(double array[], int size);

const int Max_ArSize = 10;

int main()
{
    cout << "pls enter up to 10 golf scores (enter q to quit):" << endl;
    int count = 0;
    double scores;
    double array_scores[Max_ArSize];

    while (count < Max_ArSize)
    {
        cout << "Number" << count +1 << ": ";
        if(!(cin >> scores))
            break;
        
        array_scores[count] = scores; // scores stored in array
        count++;
    }
    if(count == 0)
        cout << "No scores to display" << endl;
    else
        show_scores(array_scores, count);
    return 0;
}

void show_scores(double array[], int size)
{
    cout << "The scores that you have entered: ";
    double sum = 0.0;
    for(int i = 0; i < size; i++)
    {
        if(i==size-1)
            cout << array[i] << endl;
        else
            cout << array[i] << ", ";
        sum += array[i];
    }
    cout << "The average score is :" << sum/size << endl;   
}
