/**
 * @file 12strctfun.cpp -- functions with a structure argument
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>

using namespace std;

struct rect
{
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};

struct polar
{
    double distance; // distance from origin
    double angle;    // direction from origin
};

polar rect_to_polar(rect xypos);

void show_polar (polar dapos);


int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";

    while (cin >> rplace.x >> rplace.y) // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{   
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y + xypos.y);
    /**
     * @brief 
     * The atan2() function from the math library calculates 
     * the angle from the x and y values: 
     * angle = atan2(y, x)
     * There’s also an atan() function, 
     * but it doesn’t distinguish between angles 180 degrees apart. 
     * That uncertainty is no more desirable in a math function than it is in a wilderness guide.
     */
    answer.angle = atan2(xypos.y, xypos.x);

    return answer; //returns a polar structure

}

// show polar coordinates, converting angle to degrees
void show_polar (polar dapos)
{
    const double PI = 3.1415926;
    const double Rad_to_deg = 180/PI;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
