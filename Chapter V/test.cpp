// #include<iostream>
// int main()
// {
//     using namespace std;
//     int x;
//     cin >> x;
//     x = 2 * x++ * (3 - ++x);  //eg:x = 4;执行过程:x = 6; -21++; 2* -20;
//     cout << x;
//     return 0;
// }

#include<iostream>
int main()
{
    using namespace std;
    double prices[5] = {4.99, 5.99, 6.99, 7.99, 8.99};
    // for(double x : prices)
    // {
    //     cout << x << endl;
    // }
    for (double &x : prices)
    {
        cout << x << endl;
    }
    return 0;
}