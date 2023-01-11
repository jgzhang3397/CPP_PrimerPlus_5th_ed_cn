/*
Modify Listing 8.14 so that the template functions return the sum of the array contents 
instead of displaying the contents. 
The program now should report the total number of things and the sum of all the debts.
*/



#include <iostream>
using namespace std;

template <typename T> // template A
void ShowArray(T arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

template <typename T> // template B
void ShowArray(T * arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ula Foxe", 4800.0},
        {"Iby Scount", 1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in the arr mr_E
    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Listing Mr. E’s counts of things:\n";
    // things is an array of int
    ShowArray(things, 6); // uses template A

    cout << "The total number of things:\n";
    cout << SumArray(things, 6) << endl;

    cout << "\nListing Mr. E’s debts:\n";
    // pd is an array of pointers to double
    ShowArray(pd, 3); // uses template B (more specialized)

    cout << "The sum of all the debts: ";
    cout << SumArray(pd, 3) << endl;
    return 0;
}

template <typename T> // template A
void ShowArray(T arr[], int n)
{
    cout << "Template A\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T> // template B
void ShowArray(T * arr[], int n)
{
    cout << "Template B\n";
    for(int i = 0; i < n; i++)
        cout << * arr[i] << ' ';
    cout << endl;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}
