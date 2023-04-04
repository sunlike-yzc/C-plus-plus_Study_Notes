#include<iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "How many carrtos do you have?"<<endl;
    cin >> carrots;
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}