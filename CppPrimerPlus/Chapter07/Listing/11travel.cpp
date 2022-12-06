/**
 * @file 11travel.cpp -- using structures with functions
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * by default, pass arguments by value, 
 * the show_time(sum(trip, day3)) function call first evaluates 
 * the sum(trip, day3) function call in order to find its return value.
 */
#include <iostream>
using namespace std;

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_pr_hour = 60;

travel_time sum(travel_time t1, travel_time t2);

void show_time(travel_time t);

int main()
{
    travel_time day1 = {5, 45}; // 5 hrs, 45 min
    travel_time day2 = {4, 55}; // 4 hrs, 55 min

    travel_time trip = sum(day1, day2); 
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 42};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_pr_hour;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_pr_hour;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}
