#include<iostream>
#include<string>
using namespace std;
struct donation
{
    string name;
    double money;
};
int main()
{
    int ArSize;
    cin >> ArSize;
    donation * pointer = new donation [ArSize];
    for(int i = 0; i < ArSize; i++)
    {
        cin >> (pointer + i)->name;
        cin >> (pointer + i)->money;
    }
    for(int i = 0,j = 0; i < ArSize; i++, j++)
    {
        if(!j)
        {
            cout << "Grand Patrons" << endl;
        }
        if((pointer + i)->money > 10000)
        {
            cout << (pointer + i)->name << endl << (pointer + i)->money << endl;
        }
    }

    for(int i = 0, j = 0; i < ArSize; i++, j++)
    {
        if(!j)
        {
            cout << "Patrons" << endl;
        }
        if((pointer + i)->money < 10000)
        {
   
            cout << (pointer + i)->name << endl << (pointer + i)->money << endl;
        }
    }
    
    delete[] pointer;
    return 0;
}