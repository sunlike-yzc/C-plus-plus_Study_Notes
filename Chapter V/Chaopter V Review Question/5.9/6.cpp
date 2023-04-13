#include<iostream>
int main()
{
    using namespace std;
    char  months[] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
    char * pointer = months;
    int number;
    int shuzu[3][12] = {};
    for(int year = 0; year < 3; year++)
    {
        cout << "year: " << year + 1 << endl;
        for(int i = 0; i < 12;i++)
        {
            cout.put(* pointer + i);
            cout << ": ";
            cin >> number;
            shuzu[year][i] = number;
        }
    }
    int count = 0;
    for(int year = 0; year < 3;year++)
    {
        for (int i = 0; i < 12; i++)
        {
        count += shuzu[year][i];
        }
    }

    cout << "all year: " << count;
    return 0;


}