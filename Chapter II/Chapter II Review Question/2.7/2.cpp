#include<iostream>
using namespace std;
int Change(int length)
{
    return 220 * length;
}
int main()
{
    int length = 0;
    cout << "输入距离：";
    cin >> length;
    length = Change(length);
    cout << "转换距离是： " << length << endl;
}
