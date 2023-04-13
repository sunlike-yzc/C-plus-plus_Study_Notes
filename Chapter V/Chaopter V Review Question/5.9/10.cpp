#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter a number: "<< endl;
    int number;
    cin >> number;
    // int number_row = number;
    for(int i = 0; i < number; i++)
    {
        int number_row = number;
        for(; number_row > i + 1; number_row--)
        {
        cout << ".";
        }
        for(; number_row > 0; number_row--)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;

}