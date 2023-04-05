#include<iostream>
using namespace std;
double Change(double distance)
{
    return 63240 * distance;
}
int main()
{
    cout << "Enter the number of light years: ";
    double distance = 0;
    cin >> distance;
    double distance1 = Change(distance);
    cout << distance << " light years = "<<distance1 << " astronomical units";
    return 0;
}