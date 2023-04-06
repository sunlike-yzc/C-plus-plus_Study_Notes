#include<iostream>
int main()
{
    using namespace std;
    const  float changeTall = 0.0254;
    const float changeWeight = 2.2;
    cout << "Input how your tall in inch:_____\b\b\b\b\b";
    float inch;
    cin >> inch;
    cout << "Input how your weight in pound:_____\b\b\b\b\b";
    float weight;
    cin >> weight;
    cout << "BMI: " <<  (weight * changeWeight) / (inch * changeTall) <<endl;
    return 0;
}