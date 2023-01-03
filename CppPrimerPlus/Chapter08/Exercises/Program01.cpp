/*
Write a function that normally takes one argument,
the address of a string, and prints that string once. 
However, if a second, type int, argument is provided and is non zero, 
the function should print the string a number of times equal to 
the number of times that function has been called at that point. 
(Note that the number of times the string is printed 
is not equal to the value of the second argument; 
it is equal to the number of times the function has been called.)

Yes, this is a silly function, but it makes you use some of the techniques discussed in this chapter. 
Use the function in a simple program that demonstrates how the function works.
*/

#include <iostream>

using namespace std;

//funtionprotocol
void show_string(const char *, int n = 0);

int main()
{
    show_string("first");
    show_string("second", 0);
    show_string("third", 3);
    show_string("fouth", -9);
    return 0;
}

void show_string(const char * str, int n)
{
    static int count = 0;
    if(n)
    {
        ++count;
        for(int i = 0; i < count; i++)
            cout << str << endl;
    }
    else
    {
        ++count;
        cout << str << endl;
    }
}
