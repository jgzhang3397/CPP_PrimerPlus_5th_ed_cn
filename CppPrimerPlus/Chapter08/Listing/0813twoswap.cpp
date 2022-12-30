// twoswap.cpp -- specialization overrides a template

#include <iostream>

using namespace std;

template <class Any>
void Swap(Any &a, Any &b);

struct job {
    char name[40]; 
    double salary; 
    int floor;
};
// explicit specialization
template <> void Swap<job>(job &j1, job &j2);

void Show(job &j);

int main()
{
    cout.precision(2); 
    cout.setf(ios::fixed, ios::floatfield);

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n"; 
    Swap(i,j); // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // uses void Swap(job &, job &) cout << “After job swapping:\n”;
    Show(sue);
    Show(sidney);
    return 0;
}

template <class Any>
void Swap(Any &a, Any &b) // general version
{
    Any temp; 
    temp = a; 
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure
template <> void Swap<job>(job &j1, job &j2) // specialization
{
    double t1;
    int t2;
    t1 = j1.salary; 
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor; 
    j1.floor = j2.floor; 
    j2.floor = t2;
}

void Show(job &j)
{
    cout << j.name << ": $" << j.salary
         << " on floor "<< j.floor << endl;
}