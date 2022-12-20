/*
left.cpp -- string function with a default argument

Default Arguments:
A default argument is a value that’s used automatically 
if you omit the corresponding actual argument from a functioncall.

When you use a function with an argument list, you must add defaults from right to left:
int harpo(int n, int m = 4, int j = 5); // VALID 
int chico(int n, int m = 6, int j); // INVALID 
int groucho(int k = 1, int m = 2, int n = 3); // VALID

the harpo() prototype permits calls with one, two, or three arguments:
beeps = harpo(2); // same as harpo(2,4,5) 
beeps = harpo(1,8); // same as harpo(1,8,5) 
beeps = harpo (8,7,6); // no default arguments used

you can’t skip over arguments. Thus, the following isn’t allowed:
beeps = harpo(3, ,8); // invalid, doesn’t set m to 4


*/

#include <iostream>
using namespace std;

const int ArSize = 80;
char * left(const char * str, int n = 1);

int main()
{
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);

    char * ps = left(sample, 4);
    cout << ps << endl;

    delete [] ps; // free old string

    ps = left(sample);
    cout << ps << endl;

    delete [] ps; // free new string
    return 0;
}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char * str, int n)
{   
    // an uncooperative user may request a negative number of characters
    // sets the character count to 0 and eventually returns the null string
    if(n < 0)
        n = 0;
    // uses new to create a new string for holding the selected characters.
    char * p = new char[n+1];
    int i;
    // an irresponsible user may request more characters than the string contains. 
    // The function protects against this by using a combined test: i < n && str[i]
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i]; // copy characters
    while (i <= n)
        p[i++] = '\0'; // set rest of string to ‘\0’
    return p;
}
