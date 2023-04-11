#include<iostream>
struct pisa{
    char name[20];
    float length;
    float weight;
};
int main()
{
    using namespace std;
    pisa * pointer = new pisa;
    cout << "Input length: ";
    cin >> pointer->length;
    cout << "Input name: ";
    cin >> pointer ->name;
    cin >> pointer ->weight;
    cout << pointer->name << " "<< pointer->length << " "<< pointer->weight << " "<< endl;
    delete pointer;
    return 0;
}