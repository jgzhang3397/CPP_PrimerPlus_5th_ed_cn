/**
 * @file ex03.cpp -- 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * -------
 * 3. Here is a structure declaration:
 * struct box {
                char maker[40]; 
                float height; 
                float width;
                float length; 
                float volume;
              };
a. Write a function that passes a box structure by value and that displays the value of
each member.

b. Write a function that passes the address of a box structure and that sets the volume member 
to the product of the other three dimensions.

c. Write a simple program that uses these two functions.
 */

#include <iostream>
using namespace std;

struct box {
        char maker[40]; 
        float height; 
        float width;
        float length; 
        float volume;
};
void pass_by_value(box box1);
void pass_by_address(box * pt_box);
void userInput(box * ptr);
void addVolume(box * ptr);
int main()
{
    box box1 = {"apple", 10.0, 20.0, 5.0, 0};
    // a. ..
    pass_by_value(box1);
    
    // b. ..
    cout << "passes the address of a box structure." << endl;
    pass_by_address(&box1);

    box container;
    userInput(&container);
    addVolume(&container);
    pass_by_address(&container);
    return 0;
}

void pass_by_value(box box1)
{
    cout << "maker: " << box1.maker << endl;
    cout << "height: " << box1.height << endl;
    cout << "width: " << box1.width << endl;
    cout << "length: " << box1.length << endl;
    cout << "volume: " << box1.height * box1.length * box1.width << endl;
}

void pass_by_address(box * pt_box)
{
    cout << "maker: " << pt_box->maker << endl;
    cout << "height: " << pt_box->height << endl;
    cout << "width: " << pt_box->width << endl;
    cout << "length: " << pt_box->length << endl;
    cout << "volume: " << pt_box->height * pt_box->length * pt_box->width << endl;
}

void userInput(box * pbox)
{
    cout << "Enter the maker:";
    cin.getline(pbox->maker, 40);

    cout << "Enter the height: ";
    cin >> pbox->height;
    while (!cin || pbox->height <= 0) //invalid input
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;

        cout << "Bad input, enter the width again: ";
        cin >> pbox->height;
    }

    cout << "Enter the length: ";
    cin >> pbox->length;
    while (!cin || pbox->length <= 0)    // bad input
    {
        cin.clear();
        while (cin.get() != '\n') 
        {
            continue;
	    }
        cout << "Bad input, enter the length again: ";
        cin >> pbox->length;
    }

    cout << "Enter the width: ";
    cin >> pbox->width;
    while (!cin || pbox->width <= 0)    // bad input
    {
        cin.clear();
        while (cin.get() != '\n') 
        {
            continue;
	    }
        cout << "Bad input, enter the length again: ";
        cin >> pbox->width;
    }
}

void addVolume(box * ptr)
{
    ptr->volume = ptr->height * ptr->width * ptr->length;
}

