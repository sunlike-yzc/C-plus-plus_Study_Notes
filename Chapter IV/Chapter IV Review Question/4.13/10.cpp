#include<iostream>
#include<array>
int main()
{
    using namespace std;
    array<float,3> s1;
    cin >> s1.at(0);
    cin >> s1.at(1);
    cin >> s1.at(2);
    cout << s1.at(0) << " "<< s1.at(1) << " "<< s1.at(2) << endl;
    //或者使用[].eg:s1[0]、s1[1]、s1[2]与数组使用相同；
    return 0;
}
