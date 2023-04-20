#include<iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int * pt;
    * pt = rats;
    int & rodents = * pt;
    cout << pt << endl;
    cout << *pt << endl;
    int * ps;
    ps = & rats;
    cout << "ps" << endl << ps << endl << * ps << endl;
    return 0;
}