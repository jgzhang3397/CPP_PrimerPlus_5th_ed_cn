/**
 * @file test08.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * 8. Write a program that opens a textfile,reads it character-by-character to the end of the file, 
 * and reports the number of characters in the file.
 */

#include <iostream>
#include <fstream> // file I/O support
#include <cstdlib>  // support for exit()

using namespace std;

const int SIZE = 60;
int main()
{
    char filename[SIZE];
    ifstream inFile; // object for handling file input

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename); // associate inFile with a file

    if (!inFile.is_open()) // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count = 0;

    // read and count character after character
    inFile >> ch;
    while (inFile.good())   // while input good and not at EOF
    {
        ++count;            // one more item read
        inFile >> ch;       // get next character
    }

    // check ending condition 
    if (inFile.eof()) {
        cout << "End of file reached." << endl;
    } else if (inFile.fail()) {
        cout << "Input terminated by data mismatch." << endl;
    } else {
        cout << "Input terminated for unknown reason." << endl;
    }

    // print results
    if (count == 0) {
        cout << "No data processed." << endl;
    } else {
        cout << "Characters read: " << count << endl;
    }
    
    inFile.close();         // finished with the file

    return 0;
}