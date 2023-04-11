#include<iostream>
struct pisa{
    char name[20];
    float length;
    float weight;
};
int main()
{
    using namespace std;
    pisa pisa1;
    cin.getline(pisa1.name, 20);
    cin >> pisa1.length;
    cin >> pisa1.weight;
    cout << pisa1.name << " "<< pisa1.length << " "<< pisa1.weight << " "<< endl;
    return 0;
}