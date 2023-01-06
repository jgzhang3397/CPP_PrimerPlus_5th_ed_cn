/*
The following is a program skeleton:
    --skip--
Complete this skeleton by providing the described functions and prototypes. 
Note that there should be two show() functions, each using default arguments. 
Use const arguments when appropriate. 
Note that set() should use new to allocate sufficient space to hold the designated string. 
The techniques used here are similar to those used in designing and implementing classes. 
(You might have to alter the header filenames and delete the using directive, depending on your compiler.)


*/

#include <iostream> 
using namespace std;
#include <cstring> // for strlen(), strcpy()

struct stringy{
    char * str; // points to string
    int ct; // length of string(not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &, const char *);

void show(const stringy &, int repeat = 1);

void show(const char *, int repeat = 1);

int main()
{
    stringy beany;
    char testing[] = "Hello u";

    set(beany, testing); // first argument is a reference,

    show(beany); // prints member string once
    cout << endl;
    show(beany, 2); // prints member string twice

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");


}

void set(stringy & my_string, const char c[])
{
    int length = strlen(c);
    char * pc = new char [length+1]; //space to hold copy of testing
    my_string.str = pc; // sets str member of beany to point to the new block
    strcpy(pc, c); // copy testing to the new block

    my_string.ct = length; // and sets ct member of beany
}

void show(const stringy & myString, int Max)
{
    for(int i = 0; i < Max; i++)
        cout << myString.str << endl;
}

void show(const char * str, int max)
{
    for(int i = 0; i < max; i++)
        cout << str << endl;
}