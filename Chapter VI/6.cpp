#include<iostream>
const char * qualify[4] = {
    "10000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};
int main()
{
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;
    if(age > 17 && age < 35)
    {index = 0;}
    if(age >= 35 && age < 50)
    {index = 1;}    
    if(age >= 50 && age < 60)
    {index = 2;}
    else{
        index = 3;
    }
    cout << "Your qualify for the " << qualify[index];
    return 0;
}