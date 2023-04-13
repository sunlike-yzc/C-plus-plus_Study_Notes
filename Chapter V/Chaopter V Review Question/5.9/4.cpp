#include<iostream>
int main()
{
    using namespace std;
    const int Daphne = 100;
    int Daphne_ori = 100;
    int Celo_origin = 100;
    const double Daphne_pay = 0.1;
    const double Celo_pay = 0.05;
    int Daphne_origin = Daphne * Daphne_pay;
    int year = 1;
    for(; Daphne_ori >= Celo_origin; year++)
    {
        Daphne_ori = Daphne + year * Daphne_origin;
        Celo_origin = Celo_origin * Celo_pay + Celo_origin;
    }
    cout << "Daphne: " << Daphne_ori << endl << "Celo: " << Celo_origin << endl;
    cout << year - 1 << endl;
    return 0;
}