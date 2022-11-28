/**
 * @file test06.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * 6. Put together a program that keeps track of monetary contributions to the Society for 
 * the Preservation of Rightful Influence.
 * 
 * It should ask the user to enter the number of contributors and 
 * then solicit the user to enter the name and contribution of each contributor.
 * 
 * The information should be stored in a dynamically allocated array of structures.
 * 
 * Each structure should have two members: 
 *      a character array (or else a string object) to store the name and 
 *      a double member to hold the amount of the contribution. 
 * 
 * After reading all the data, the program should display the names and amounts donated 
 * for all donors who contributed $10,000 or more.
 * 
 * This list should be headed by the label Grand Patrons. 
 * 
 * After that, the program should list the remaining donors.
 * 
 * That list should be headed Patrons.
 * 
 * If there are no donors in one of the categories, the program should print the word “none.” 
 * 
 * Aside from displaying two categories, the program need do no sorting.
 */

#include <iostream>
#include <string>

using namespace std;
const int LIMIT = 10000;
struct donors
{
    string name;
    double amount;
};

int main()
{
    // ask user how many donors
    cout << "Please enter the number of contributors: ";
    int numbers;
    (cin >> numbers).get();

    if(numbers <=0)
    {
        cout << " lost change";
        exit(0);
    }

    // dynamically allocate array of structures
    donors * pt_donors = new donors[numbers];

    // initialize structure
    for(int i = 0; i < numbers; ++i)
    {
        // solicit and set name
        cout << "Enter the name of the donor #" << i + 1 << ": ";
        getline(cin, pt_donors[i].name);
        while (pt_donors[i].name == "")
        {
            cout << "Error, nothing entered." << endl;
            cout << "Enter the name of the donor #" << i + 1 << ": ";
            getline(cin, pt_donors[i].name);
        }

        // solicit and set amount
        while (1)
        {
            cout << "Enter their contribution: $";
            cin >> pt_donors[i].amount;

        /**
         * @brief 
         * But if cin.fail() is true, it means that
            a) the entered value does not fit the variable
            b) the varialbe will not be affected
            c) the instream is still broken
            d) the entered value is still in the buffer and will be used for the next "cin >> variable"statement.

            Hence you have to do the following:
            a) repair the instream via cin.clear();
            b) clear the buffer with cin.ignore(std::numeric_limits<int>::max(),'\n');

         */
            if (cin.fail())             // no extraction took place
            {
                cin.clear();            // clear error flags
                cin.ignore(1000, '\n'); // clear bad input from the stream
                cout << "Error. Invalid value entered." << endl;
                continue;               // try again
            }

            cin.ignore(1000, '\n'); // clear additional input from the stream
            if (cin.gcount() > 1)   // if more than one additional char cleared
            {                       // we'll consider this input to be invalid
                cout << "Error. Invalid value entered." << endl;
                continue;           // try again
            }

            if (pt_donors[i].amount <= 0) // make sure input is positive
            {
                cout << "Error. Negative value entered." << endl;
                continue;  // try again
            }

            break;

        }

    }

    // display Grand Patrons
    cout << fixed << showpoint;
    cout.precision(2); // cout << fixed << showpoint << setprecision(2);
    cout << "Grand Patrons:" << endl;

    int counter = 0;
    for (int i = 0; i < numbers; ++i) {
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
    for (int i = 0; i < numbers; ++i) {
        if (pt_donors[i].amount < LIMIT) {
            cout << pt_donors[i].name << endl;
            ++counter;
        }
    }
    if (!counter) {
        cout << "none" << endl;
    }

    return 0;
}