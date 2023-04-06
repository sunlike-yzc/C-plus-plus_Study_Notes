#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter your tall:_____\b\b\b\b\b";
    float tall;
    cin >> tall;
    const int change = 12;
    cout << "Your tall is: " << tall << " foots" << "Your tall is: " << tall * change << " inch";
    return 0;
}