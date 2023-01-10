// Write a template function max5() that takes as its argument 
// an array of five items of type T and returns the largest item in the array. 
// (Because the size is fixed, it can be hard-coded into the loop instead of being passed as an argument.) 
// Test it in a program that uses the function with an array of five int value and an array of five double values.


#include <iostream>

using namespace std;

const int SIZE = 5;

// function template prototype
template <class T>
T max5(const T * array_five_items);

int main()
{
    int testArray_int[SIZE] = {4, 8, 9, -1, 0};
    double testArray_double[SIZE] = {1.0, -90, 80.0, 76.2, 22};

    int max_int = max5(testArray_int);
    cout << "The maximum value in testArray_int is: " << max_int << endl;

    double max_double = max5(testArray_double);
    cout << "The maximum value in testArray_double is: " << max_double << endl;

    return 0;
}

template <class T>
T max5(const T * array_five_items)
{
    T max = array_five_items[0];
    for(int i = 0; i < SIZE; i++)
    {
        if (max < array_five_items[i])
            max = array_five_items[i];
    }
    return max;
}