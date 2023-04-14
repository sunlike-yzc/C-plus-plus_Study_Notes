#include<iostream>
enum{red, orange, yellow, green, blue, violet, indigo};

int main()
{
    using namespace std;
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while(code >= red && code <= indigo)
    {
        switch(code)
        {
            case red : cout << "Her lips was red.\n"; break;
            case orange : cout << "orange.\n";break;
            case yellow : cout << "yellow.\n";break;
            case green : cout << "green.\n";break;
            case blue : cout << "blue";break;
            case violet : cout << "violet";break;
            case indigo : cout << "violet";break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}