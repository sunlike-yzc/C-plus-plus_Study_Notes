#include<iostream>
double cube(double);
double cuberef(double &);
using namespace std;
int main()
{
    double x = 3;
    cout << "cube = " << cube(x) << " " << x << endl;
    cout << "cuberef = " << cuberef(x) << " "<< x << endl;
}
double cube(double x)
{
    x *= x * x;
    return x;
}
double cuberef(double & x)
{
    x *= x * x;
    return x;
}