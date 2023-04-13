#include<iostream>
int main()
{
    using namespace std;
    int x,y;
    cin >> x >> y;
    int result = 0;
    for (; x < y+1; x++)
    {
        result += x; 
    }
    cout << result <<endl;
    return 0;
}