#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds";
    cout << "First, enter the degrees: ";
    int degree;
    cin >> degree;
    cout << "Second, enter the mintues of arc: ";
    float minutes;
    cin >> minutes;
    cout << "Third, enter the seconds of arc: ";
    float seconds;
    cin >> seconds;
    const int change = 60;
    float degrees = degree + minutes/change + seconds / (change * change );
    cout << degree << " degrees" << minutes << " minutes" << seconds << " seconds" <<" = " << degrees << " degrees"; 
    return 0;
}