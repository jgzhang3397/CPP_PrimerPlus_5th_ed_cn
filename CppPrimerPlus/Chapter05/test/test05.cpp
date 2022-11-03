/**
 * @file test05.cpp -- solution test04 with 2D-array
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

const int Months = 12;
const int Years = 3;

int main()
{
    using namespace std;
    const string months[Months] = { 
                "January:",
                "February:",
                "March:\t",
                "April:\t",
                "May:\t",
                "June:\t",
                "July:\t",
                "August: ",
                "September:",
                "October:",
                "November:",
                "December:"
    };

    int sale_nums[Years][Months] =
    {
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {101, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {102, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100}
    };

    cout << "The numbers of book to sale for 2002 - 2004\n\n";
    cout << "\t\t2002\t2003\t2004\n";
    for(int month = 0; month < Months; ++month)
    {
        cout << months[month] << "\t";
        for(int year = 0; year < Years; ++year)
            cout << sale_nums[year][month] << "\t";
        cout << endl;
    }

    int  num_books[3] = {0};
    int  sum_books = 0;
    for(int year = 0; year < Years; ++year)
    {
        for(int month = 0; month < Months; ++month)
            num_books[year] += sale_nums[year][month];
        cout << "The sales book number in "<<(2002+year) << " is :" << num_books[year] << endl;
        sum_books += num_books[year];
    }
    cout << "The sales book number in this 3 years is sum of:  "<< sum_books;
    return 0;
}