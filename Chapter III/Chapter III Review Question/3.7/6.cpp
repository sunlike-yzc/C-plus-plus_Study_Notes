#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter the kmiels: ";
    float kmiles;
    cin >> kmiles;

    cout << "Enter the oil: ";
    float oil;
    cin >> oil;

    // const float kmileMile = 62.14;
    // const float gaL = 3.785;
    cout << (100 / kmiles) * oil <<" oil per 100 kmiles";
    return 0;
}