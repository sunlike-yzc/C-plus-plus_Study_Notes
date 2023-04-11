#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << endl;
    for(int i = 0; i < 100; i = i + by)
    {
        cout << i << endl;
    }
    return 0;
}