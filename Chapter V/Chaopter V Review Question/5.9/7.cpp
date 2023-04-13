#include<iostream>
#include<string>
using namespace std;
struct car{
    string make;
    int year;
};
int main()
{
    int number;
    cin >> number;
    cin.ignore();
    car * pointer = new car [number];
    for(int i = 0; i < number; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, (pointer+i)->make);
        cout << "Please enter year made: ";
        cin >> (pointer+i)->year;
        cin.ignore();
    }
    cout << "Here is your collection:" <<endl;
    for(int i = 0; i < number; i++)
    {
        cout << (pointer+i)->year << " " << (pointer+i)->make << endl;
    }
    delete [] pointer;
    return 0;
}