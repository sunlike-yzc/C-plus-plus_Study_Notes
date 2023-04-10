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
    string full_name = s2;
    full_name.append(", ").append(s1);
    cout << "Your name is: " << full_name << endl;
    return 0;
}