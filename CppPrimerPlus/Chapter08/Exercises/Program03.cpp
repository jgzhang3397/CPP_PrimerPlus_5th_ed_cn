/*
Write a function that takes a reference to a string object as its parameter and 
that converts the contents of the string to uppercase. 
Use the toupper() function described in Table 6.4. 
Write a program that uses a loop which allows you to test the function with different input. 
A sample run might look like this:
    Enter a string (q to quit): go away 
    GO AWAY
    Next string (q to quit): good grief! 
    GOOD GRIEF!
    Next string (q to quit): q 
    Bye.
*/

#include <iostream>
#include <string>
#include <cctype> // use the toupper() function

using namespace std;

// function protocol
void to_upper(string &);

int main()
{
    cout << "Enter a string (q to quit): ";
    string text;
    while (getline(cin, text) && text != "q")
    {
        to_upper(text);
        cout << text << endl;
        cout << "Next string is (q to quit): ";
    }
    
    return 0;
}

void to_upper(string & s)
{
    for(int i = 0; s[i]; i++)
        s[i] = toupper(s[i]);
}

