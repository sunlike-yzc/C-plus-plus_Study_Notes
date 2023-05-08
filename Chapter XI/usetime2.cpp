#include<iostream>
#include "mytime2.h"

int main()
{
    using namespace std;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;
    total.Show();
    cout << endl;

    cout << "weeding time - waxing time = ";
    diff = weeding - waxing;
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}