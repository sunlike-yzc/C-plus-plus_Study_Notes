#include<iostream>
double average(double x, double y);
using namespace std;
int main()
{
    double a,b;
    double average_p = 0;
    cout << "Enter two number: ";
    cin >> a >> b;
    while((a != 0) && (b != 0))
    {
        average_p = average(a, b);
        cout << "调和平均值 = " << average_p << endl;
        cout << "Next enter two number: ";
        cin >> a >> b;
    }
    return 0;
}

double average(double x, double y)
{
    double average_p = 0.0;
    average_p = 2.0 * x * y / (x + y);
    return average_p;
}