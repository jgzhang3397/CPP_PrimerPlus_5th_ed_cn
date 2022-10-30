/**
 * @file 0520_nested.cpp -- nested loops and 2D array
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    //const char * cities[Cities] = // array of pointers
    const string cities[Cities] = 
    {           // to 5 strings
        "Shanghai",
        "Beijing",
        "Anhui",
        "Xian",
        "Hebei"
    };

    int maxtemps[Years][Cities] = // 2D array
    {
        {95, 99, 98, 96, 97}, // maxtemps[0]
        {97, 98, 94, 99, 100},// maxtemps[1]
        {97, 94, 93, 95, 98}, // maxtemps[2]
        {98, 94, 92, 91, 99}  // maxtemps[3]
    };

    cout << "Maximum temperatures for 2002 - 2005\n\n";
    for(int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ": \t";
        for(int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    return 0;
}