#include<iostream>
using namespace std;
void time(int ,int);
int main()
{
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    time(hour,minutes);
    return 0;
}
void time(int hour,int minutes)
{
    cout << "Time: " << hour<<":"<<minutes;
}