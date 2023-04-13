#include<iostream>
int main()
{
    using namespace std;
    char  months[] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
    char * pointer = months;
    int number;
    int shuzu[12] = {};
    for(int i = 0; i < 12;i++)
    {
        cout.put(* pointer + i);
        cout << ": ";
        cin >> number;
        shuzu[i] = number;
    }
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        count += shuzu[i];
    }
    cout << "all year: " << count;
    return 0;


}