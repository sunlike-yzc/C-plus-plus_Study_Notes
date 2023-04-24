#include<iostream>
void oil(int x);
int main()
{
    using namespace std;

    int teaxs = 31;
    int year = 2011;
    cout << "In main(), texas = " << teaxs << ", &teaxs = ";
    cout << & teaxs << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    oil(teaxs);
    cout << "In main(), texas = " << teaxs << ", &teaxs = ";
    cout << & teaxs << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;

}

void oil(int x)
{
    using namespace std;
    int teaxs = 5;
    cout << "In oil(), teax = " << teaxs << ", &teaxs = ";
    cout << & teaxs << endl;
    cout << "In oil(), x = " << x << ", &x = " << &x << endl;
    {
        int teaxs = 113;
        cout << "In block, teaxs = " << teaxs;
        cout << ", &teaxs = " << &teaxs << endl;
        cout << "In block, x = " << x << ", &x = " << & x << endl;
    }

    cout << "Post-block teaxs = " << teaxs;
    cout << ", &teaxs = " << &teaxs << endl;
}