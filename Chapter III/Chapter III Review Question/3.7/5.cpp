#include<iostream>
int main()
{
    using namespace std;
    cout <<"Enter the world's of the poplation: ";
    long long worldPopulation;
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    long long populationUS;
    cin >> populationUS;
    cout << "The population of the US is "<< (double(populationUS) / double(worldPopulation))*100<< "% of the world population.";
    return 0;
}