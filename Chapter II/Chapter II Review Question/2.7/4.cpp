#include<iostream>
using namespace std;
int month(int age);
int main()
{
    cout << "Enter your age: ";
    int age = 0;
    cin >> age;//cin输入之后会自动换行
    age = month(age);
    cout << "Your age in months is: "<<age;
    return 0;
}
int month(int age)
{
    return 24 * age;

}