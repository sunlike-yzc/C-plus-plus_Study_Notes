#include<iostream>
int main()
{
    using namespace std;
    cout << "Input a integer:";
    int inte;
    cin >> inte;
    int count = 0;
    while(inte)
    {
        count += inte;
        cout << "Input a integer:";
        cin >> inte;
    }
    cout << count << endl;
    return 0;
}