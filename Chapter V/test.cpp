#include<iostream>
int main()
{
    using namespace std;
    int x;
    cin >> x;
    x = 2 * x++ * (3 - ++x);  //eg:x = 4;执行过程:x = 6; -21++; 2* -20;
    cout << x;
    return 0;
}