/**
 * @file 0808filefunc.cpp -- function with ostream & parameter
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-19
 * 
 * @copyright Copyright (c) 2022
 * Another Object Lesson: Objects, Inheritance, and References
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[],int n);
const int LIMIT = 5;

int main()
{
    ofstream fout;
    const char * fn = "0808ep-data.txt";
    fout.open(fn);

    if (!fout.is_open())
    {
        cout << "Can’t open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE); 
    }

    double objective;
    cout << "Enter the telescope "
            "focal length of your objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces.\n";

    for(int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepieces #" << i + 1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, LIMIT); 
    file_it(cout, objective, eps, LIMIT); 
    cout << "Done\n";
    return 0;
}

void file_it(ostream & os, double fo, const double fe[],int n)
{
    /*
    os parameter,which is type ostream &,can refer to an ostream object such as cout 
    and to an ofstream object such as fout
    */
    ios_base::fmtflags initial;
    // places an object in the mode of using fixed decimal-point notation.
    initial = os.setf(ios_base::fixed); // save initial formatting state
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios_base::showpoint); // places an object in the mode of showing a trailing decimal point, even if the following digits are zeros
    // The precision() method indicates the number of figures to be shown to the right of 
    // the decimal (provided that the object is in fixed mode). 
    os.precision(1);
    os.width(12); 
    // width() call sets the field width to be used for the next output action
    // This setting holds for displaying one value only, and then it reverts to the default = 0
    os << "f eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }

    // Each object stores its own formatting settings. 
    // So when the program passes cout to file_it(), cout’s settings are altered and then restored. 
    // When the program passes fout to file_it(), fout’s settings are altered and then restored.
    os.setf(initial); // restore initial formatting state
}

