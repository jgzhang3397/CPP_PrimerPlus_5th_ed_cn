// The Candy Bar structure contains three members. 
/*
The first member holds the brand name of a candy bar. 
The second member holds the weight (which may have a fractional part) of the candy bar, 
and the third member holds the number of calories (an integer value) in the candy bar. 

Write a program that uses a function that takes as arguments a reference to CandyBar, 
a pointer-to-char, a double, and an int and uses the last three values to
 set the corresponding members of the structure. 

 The last three arguments should have default values of “Millennium Munch,” 2.85, and 350. 
 Also, the program should use a function that 
 takes a reference to a CandyBar as an argument and 
 displays the contents of the structure. Use const where appropriate.
 */

#include <iostream>

using namespace std;

// structure
struct candy_Bar
{
    const char * brand_name;
    double weight;
    int calories;
};

//function protocol
void set_CandyBar(candy_Bar &, const char * s = "Millennium Munch", 
                                double w = 2.85, int c = 350);

void display_CandyBar(const candy_Bar &);

int main()
{
    candy_Bar candy_bar;
    const char * brand = "Snikers";
    double weight = 1.66;
    int calories = 229;

    set_CandyBar(candy_bar);
    display_CandyBar(candy_bar);
    cout << endl;

    set_CandyBar(candy_bar, brand, weight, calories);
    display_CandyBar(candy_bar);
    return 0;
}

void set_CandyBar(candy_Bar & cb, const char * s, double w , int c)
{
    cb.brand_name = s;
    cb.weight = w;
    cb.calories = c;
}

void display_CandyBar(const candy_Bar & cb)
{
    cout << "Brand name : " << cb.brand_name << endl;
    cout << "Weight : " << cb.weight << endl;
    cout << "Calories : " << cb.calories << endl;
}
