/**
 * @file 0805cubes.cpp -- regular and reference arguments
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * 
 * the refcube() function modifies the value of x in main() and cube() doesn’t.
 * The variable a is local to cube(). It is initialzed to the value of x, 
 * but changing a has no effect on x. 
 * But because refcube() uses a reference argument, 
 * the changes it makes to ra are actually made to x.
 * 
 * Reference arguments become useful with larger data units, such as structures and classes
 */

#include<iostream>
using namespace std;
double cube(double a);
double refcube(double & ra);

int main()
{   
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    return a *= a * a;
}

double refcube(double & ra)
{
    return ra *= ra * ra;
}