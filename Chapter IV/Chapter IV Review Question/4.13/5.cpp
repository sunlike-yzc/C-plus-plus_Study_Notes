#include<iostream>
struct CandyBar{
    char num[20];
    float weight;
    int k;
} snack = {"Moncha Munch", 2.3, 350};
int main()
{
    using namespace std;
    cout << snack.num << " " << snack.weight << " " << snack.k;
    return 0;
}