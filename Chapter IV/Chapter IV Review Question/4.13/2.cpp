#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    string dessert;

    cout << "Enter your name:";
    cin.getline(name, 20);
    cout << "Enter your favorite dessert:";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}