#include<iostream>
using namespace std;
int Fahrenheit(int tem);
int main()
{
    cout << "Please enter a Celsius value: ";
    int tem = 0;
    cin >> tem;
    int Ftem = 0;
    Ftem = Fahrenheit(tem);
    cout << tem << " degree Celsius is " << Ftem <<" degree Fahrenheit";
    return 0;
}
int Fahrenheit(int tem)
{
    return 1.8*tem + 32;
}