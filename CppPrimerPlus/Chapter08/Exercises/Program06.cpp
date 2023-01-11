/*
Write a template function maxn() that takes as its arguments an array of items of typeT 
and an integer representing the number of elements in the array and 
that returns the largest item in the array. 
Test it in a program that uses the function template with 
an array of six int value and an array of four double values.

The program should also include a specialization that 
takes an array of pointers-to-char as an argument and 
the number of pointers as a second argument and that 
returns the address of the longest string. 

If multiple strings are tied for having the longest length, 
the function should return the address of the first one tied for longest. 
Test the specialization with an array of five string pointers.
*/

#include <iostream>
#include <cstring>

using namespace std;

// template functionsprotocol
template <class T>
T maxn(T arr[], int size); // no const

// explicit specialization
template <> char * maxn<char *>(char * arr[], int size);


int main()
{
    int array_int[] = {1, 9, -9, 8, 200, 87};
    double array_double[] = {3.14, 7.87, 9.87, -78.09};
    

    int max_int = maxn(array_int, 6);
    double max_double = maxn(array_double, 4);


    cout << "The largest item in array_int is " << max_int << endl;
    cout << "The largest item in array_double is " << max_double << endl;

    char * ar_pt_str[] = {
        "bla bla", 
        "bla", 
        "bla bla bla", // 11 characters
        "What's up??", // 11 characters
        "I see"
    }; 
    cout << "longest string: " << maxn(ar_pt_str, 5) << endl;



    return 0;
}

template <class T>
T maxn(T * arr, int size)
{
    T max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}


template <> char * maxn<char *>(char * arr[], int size)
{
    char * longest = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(strlen(longest) < strlen(arr[i]))
            longest = arr[i];
    }
    return longest;
}
