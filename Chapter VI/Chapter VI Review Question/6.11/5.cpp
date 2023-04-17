#include<iostream>
using namespace std;
int main()
{
    cout << "Enter your salary: ";
    int salary; //当输入负数时，无符号数会变成很大的整数
    const float rate_3 = 0.2;
    const float rate_2 = 0.15;
    const float rate_1 = 0.1;
    while((cin >> salary) && (salary > 0)) 
    {
        if(salary > 35000)
        {
            salary = 4000 + (salary - 35000) * rate_3;
            cout << "tvarps: " << salary << endl;
        }
        else if(salary > 15001)
        {
            salary = 1000 + (salary - 15000) * rate_2;
            cout << "tvarps: " << salary << endl;
        }
        else if(salary > 5001)
        {
            salary = (salary - 5000) * rate_1;
            cout << "tvarps: " << salary << endl;;
        }
        else{
            cout << "不收税" << endl;
        }
        cout << "Enter your salary: ";
    }
    return 0;
}