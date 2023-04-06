#include<iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    const int code = 66;
    int x = 66;
    char c1 {31};
    char c2 = {66};
    char c3 = {code};
    char c4 = {x};
    x = 31325;
    char c5 = x;
    int p = c5;
    cout << "c1 = " << c1 << " ,c2 = " << c2 << " ,c3 = " << c3 << " ,c4 = " << c4 << " ,c5 = " << c5 << " ,p = " << p <<endl; 

    return 0;
}