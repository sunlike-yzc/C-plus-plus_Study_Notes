#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    string s1, s2;
    cout << "Enter your first name: ";
    getline(cin, s1);
    cout << "Enter your last name: ";
    getline(cin, s2);
    cout << "Your name is: " << s2 << ", " << s1;
    return 0;
}