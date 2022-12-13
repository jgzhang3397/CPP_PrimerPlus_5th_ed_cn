/**
 * @file ex06.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 6. Write a program that uses the following functions:
 *Fill_array() takes as arguments the name of an array of double values and an array size. 
 * It prompts the user to enter double values to be entered in the array. 
 * It ceases taking input when the array is full or when the user enters non-numeric input, 
 * and it returns the actual number of entries.
 * 
 *Show_array() takes as arguments the name of an array of double values 
 * and an array size and displays the contents of the array.
 * 
 *Reverse_array() takes as arguments the name of an array of double values and an array size 
  and reverses the order of the values stored in the array.


The program should use these functions to fill an array, show the array, reverse the array, 
show the array, reverse all but the first and last elements of the array, and then show the array.
 */

#include<iostream>
using namespace std;
const int ArSize = 10;
int Fill_array(double array[], int array_size);
void Show_array(double array[], int array_size);
void Reverse_array(double array[], int array_size);

int main()
{
    double array[ArSize];
    int num_enterNr = Fill_array(array, ArSize);
    Show_array(array, num_enterNr);
    Reverse_array(array, num_enterNr);
    Show_array(array, num_enterNr);

    Reverse_array(array+1, num_enterNr-2);
    Show_array(array, num_enterNr);


    return 0;
}

int Fill_array(double array[], int array_size)
{
    int count = 0;
    cout << "Pls enter your numbers <q to quit>:" << endl;
    for(int i = 0; i<array_size; i++)
    {
        double enter_num;
        cout << "Number" << i+1 << ":";
        if(cin>>enter_num)
        {
            array[i] = enter_num;
            ++count;
        }
        else
            break;  
    }
    return count;
}

void Show_array(double array[], int array_size)
{
    for(int i = 0; i < array_size; i++)
    {
        if(i == array_size-1)
            cout << array[i] << endl;
        else
            cout << array[i] << ", ";
    }
}

void Reverse_array(double array[], int array_size)
{
    int mittel = array_size/2 - 1;
    for(int i=0; i<=mittel; i++)
    {
        int temp = 0;
        temp = array[array_size-1];
        array[array_size-1] = array[i] ;
        array[i] = temp;
        array_size --;
    }
}