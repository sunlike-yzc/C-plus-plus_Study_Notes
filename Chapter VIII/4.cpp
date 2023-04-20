#include<iostream>
void swapr(int &, int &);
void swapp(int *, int *);
void swapv(int ,int );
using namespace std;
int main()
{
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1 << endl;
    cout << "wallet2 = $" << wallet2 << endl;

    cout << "reference: " << endl;
    int & walletr1 = wallet1;
    int & walletr2 = wallet2;
    swapr(walletr1, walletr2);

    cout << "pointer: " << endl;
    int * pointer_wallet1 = & wallet1;
    int * pointer_wallet2 = & wallet2;
    swapp(pointer_wallet1, pointer_wallet2);

    cout << "value: " << endl;
    swapv(wallet1, wallet2);
    return 0;
}

void swapr(int & re1, int & re2)
{
    int temp;
    temp = re1;
    re1 = re2;
    re2 = temp;
    cout << "wallet1 = $" << re1 << endl;
    cout << "wallet2 = $" << re2 << endl;
}

void swapp(int * re1, int * re2)
{
    int temp;
    temp = * re1;
    * re1 = * re2;
    * re2 = temp;
    cout << "wallet1 = $" << * re1 << endl;
    cout << "wallet2 = $" << * re2 << endl;
}

void swapv(int re1, int re2)
{
    int temp;
    temp = re1;
    re1 = re2;
    re2 = temp;
}