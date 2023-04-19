#include<iostream>
using namespace std;
int input(double *);
void show(double *,int);
void average(double *,int);
int main()
{
    double arr[10];
    double * pointer = arr;
    int ArSize = input(pointer);
    show(pointer, ArSize);
    average(pointer, ArSize);
    return 0;
}
int input(double * pointer)
{
    double score;
    int count = 0;
    cout << "Enter score: or enter q to quit." << endl;
    while((cin >> score) && (count < 10))
    {
        pointer[count] = score;
        count++;
    }
    return count;
}
void show(double * pointer, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << pointer[i] << endl;
    }
}
void average(double * pointer, int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += pointer[i];
    }
    double average_p = sum / n;
    cout << "平均分 = " << average_p;
}