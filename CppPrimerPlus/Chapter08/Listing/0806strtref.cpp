/**
 * @file 0806strtref.cpp -- using structure references
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-17
 * 
 * @copyright Copyright (c) 2022
 * ventures into three new areas
 * 1. The first is using a reference to a structure, illustrated by the first function call: use(looper)
 * 2. The second new area is using a reference as a return value
 * 3. The third new area is that the program uses the function call to access a structure member:
 *    A function that returns a reference is actually an alias for the referred-to variable.
 */

#include <iostream>

using namespace std;

struct sysop
{
    char name[26];
    char quote[64];
    int  used;
};

const sysop & use(sysop & sysopref); // function with a reference return type


int main()
{
// NOTE: some implementations require using the keyword static 
// in the two structure declarations to enable initialization
    sysop looper = 
    {
        "Rick \"Fortran\" Looper",
        "I’m a goto kind of guy.",
        0
    };

    use(looper); // looper is type sysop
    cout << "Looper: " << looper.used << " use(s)\n"; 

    sysop copycat;
    copycat = use(looper);

    cout << "Looper: " << looper.used << " use(s)\n";
    cout << "Copycat: " << copycat.used << " use(s)\n";
    cout << "use(looper): " << use(looper).used << " use(s)\n";
    return 0;
}

// use() returns the reference passed to it
const sysop & use(sysop & sysopref)
{
    cout << sysopref.name << " says:\n"; 
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref;
}