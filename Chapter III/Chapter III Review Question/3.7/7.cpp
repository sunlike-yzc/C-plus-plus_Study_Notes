#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter the Europe: ";
    float kmilePeroil;
    cin >> kmilePeroil;
    const float kmileMile = 62.14;
    const float gaL = 3.785;

    float oil = kmilePeroil / gaL;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.precision(5);
    cout << kmileMile / oil <<" gmiles per oil";
    return 0;
}