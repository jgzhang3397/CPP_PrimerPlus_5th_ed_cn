/**
 * @file test09.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * 9. Do Programming Exercise 6,but modify it to get information from a file.
 * 
 * The first item in the file should be the number of contributors, 
 * and the rest of the file should consist of pairs of lines, 
 * with the first line of each pair being a contributor’s name 
 * and the second line being a contribution. T
 * hat is, the file should look like this:
 * 
 *  4
    Sam Stone 2000
    Freida Flass 100500
    Tammy Tubbs 5000
    Rich Raptor 55000
 */

#include <iostream>
#include <string>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()


using namespace std;
const int SIZE = 60;
const int LIMIT = 10000;

struct donor {
    string name;
    double amount;
};

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

    // read how many donors from inFile
    int num_of_donors;
    (inFile >> num_of_donors).get();

    // dynamically allocate array of structures
    donor * pt_donors = new donor[num_of_donors];

    // initialize structure
    for(int i = 0; i < num_of_donors; ++i)
    {
        // read the name of donor
        getline(inFile, pt_donors[i].name); // string als input use getline

        // reads donor's contribution
        (inFile >> pt_donors[i].amount).get(); // int als input use (cin >> ..).get()
    }

    // display Grand Patrons
    cout << "Grand Patrons:" << endl;
    int counter = 0;

    for (int i = 0; i < num_of_donors; ++i) {
        if (pt_donors[i].amount >= LIMIT) {
            cout << pt_donors[i].name << " donated $" << pt_donors[i].amount << endl;
            ++counter;
        }
    }
    if (!counter) {
        cout << "none" << endl;
    }

    // display Patrons
    cout << "Patrons:" << endl;
    counter = 0;
    for (int i = 0; i < num_of_donors; ++i) {
        if (pt_donors[i].amount < LIMIT) {
            cout << pt_donors[i].name << endl;
            ++counter;
        }
    }
    if (!counter) { // !counter == (counter == 0)
        cout << "none" << endl;
    }

    return 0;
}