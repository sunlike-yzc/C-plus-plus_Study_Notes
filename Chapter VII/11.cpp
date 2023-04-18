#include<iostream>
struct traval_time{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;
traval_time sum(traval_time t1, traval_time t2);
void show_time(traval_time);

int main()
{
    using namespace std;
    traval_time day1 = {5, 45};
    traval_time day2 = {4, 55};

    traval_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    traval_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}

traval_time sum(traval_time t1, traval_time t2)
{
    traval_time total;

    total.mins = (t1.mins + t2.hours) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
    
    return total;
}
void show_time(traval_time t)
{
    using namespace std;
    cout << t.hours << " hours, " << t.mins << " minutes\n";
}