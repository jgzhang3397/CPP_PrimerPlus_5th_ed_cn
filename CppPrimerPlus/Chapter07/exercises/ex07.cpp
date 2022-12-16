/**
 * @file ex07.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * 7. Redo Listing7.7, modifying the three array-handling functions to each use two pointer parameters 
 * to represent a range. 
 * The fill_array() function, instead of returning the actual number of items read, 
 * should return a pointer to the location after the last location filled; 
 * the other functions can use this pointer as the second argument to identify the end of the data.
 */

#include <iostream>

using namespace std;

const int Max = 5;

// function prototypes
double * fill_array(double * begin, const double * end);
void show_array(const double * begin , const double * end); // don't change data
void revalue(double r, double * begin, const double * end);

int main()
{

    double properties[Max];

    double * end = fill_array(properties, properties+Max);
    show_array(properties, end);

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

    revalue(factor, properties, end);
    show_array(properties, end);
    cout << "Done\n";
    return 0;
}

double * fill_array(double *begin, const double *end)
{
    double temp;
    double *pt;
    for(pt = begin; pt != end; pt++)
    {
        cout << "Enter value #" << (pt - begin +1) << ":";
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
        *pt = temp;
    }
    return pt;
}

// the following function can use, but not alter, 
// the array whose address is ar
void show_array(const double * begin, const double * end)
{
    const double *pt;
    for(pt = begin; pt != end; pt++)
    {
        cout << "Property #" << (pt - begin + 1) << ": $";
        cout << *pt << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double * begin, const double * end)
{
    for (double * pt = begin; pt != end; pt++) 
        *pt *= r;
}
