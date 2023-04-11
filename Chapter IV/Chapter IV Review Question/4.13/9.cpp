#include<iostream>
using namespace std;

struct CandyBar{
    char num[20];
    float weight;
    int k;
};

int main()
{
    int snacks;
    cout << "Enter the number of snacks: ";
    cin >> snacks;

    CandyBar * pointer = new CandyBar [snacks];

    for (int i = 0; i < snacks; i++) {
        cout << "Enter the num of snack " << i + 1 << ": ";
        cin >> pointer[i].num;

        cout << "Enter the weight of snack " << i + 1 << ": ";
        cin >> pointer[i].weight;

        cout << "Enter the k of snack " << i + 1 << ": ";
        cin >> pointer[i].k;

        cout << endl;
    }

    for(int i = 0; i < snacks; i++)
    {
        cout << pointer[i].num << " " << pointer[i].weight << " " << pointer[i].k << endl;;
    }

    delete[] pointer;

    return 0;
}
