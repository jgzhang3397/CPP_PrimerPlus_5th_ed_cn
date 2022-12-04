/**
 * @file 07arrfun03.cpp -- array functions and const
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

const int Max = 5;

// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main()
{

    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    cout << "Enter revaluation factor: ";

    double factor;
    cin >> factor;

    if(!cin)
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input; input process terminated.\n";
        exit(0);
    }
    else if (factor < 0)
            exit(0);

    revalue(factor, properties, size);
    show_array(properties, size);
    cout << "Done\n";
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for(i = 0; i< limit ; i++)
    {
        cout << "Enter value #" << i+1 << ":";
        cin >> temp;

        // check cin wether valid
        if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            
            cout << "Bad input; input process terminated.\n";
            break; 
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i ;
}

// the following function can use, but not alter, 
// the array whose address is ar
void show_array(const double ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Property #" << i+1 << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++) 
        ar[i] *= r;
}
