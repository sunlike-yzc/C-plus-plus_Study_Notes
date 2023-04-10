#include<iostream>
int main()
{
    using namespace std;
    char firstName[20];
    cin.getline(firstName, 20);
    cout << "What is your first name? " << firstName << endl;
    char lastName[20];
    cin >> lastName;
    cout << "Whar is your last name? " << lastName << endl;
    char letterGrade;
    cin >> letterGrade;
    cout << "What letter grade do you deserve?" << letterGrade << endl;
    int age;
    cin >> age;
    cout << "What is your age? " << age << endl;
    cout << "Name: " << lastName << ", " << firstName << endl;
    char grade;
    cin >> grade;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;
    return 0;
}