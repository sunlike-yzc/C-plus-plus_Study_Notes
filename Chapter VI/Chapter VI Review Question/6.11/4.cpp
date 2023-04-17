#include<iostream>
#include<string>
using namespace std;

struct bop{
    string fullname;
    string title;
    string bopname;
    int preference;
};

void menu();
void show_a(bop * pointer);
void show_b(bop * pointer);
void show_c(bop * pointer);
void show_d(bop * pointer);

int main()
{
    cout << "Enter your choice: ";
    menu();
    char ch;
    bool flag = true;
    bop * pointer = new bop [5];
    for(int i = 0; i < 5; i++)
    {
        cin >> (pointer + i)->fullname;
        cin >> (pointer + i)->title;
        cin >> (pointer + i)->bopname;
        cin >> (pointer + i)->preference;
    }
    while(flag)
    {
        cin >> ch;
        switch(ch)
        {
            case 'a' : show_a(pointer),flag = true;break;
            case 'b' : show_b(pointer),flag = true;break;
            case 'c' : show_c(pointer),flag = true;break;
            case 'd' : show_d(pointer),flag = true;break;
            case 'q' : cout << "Bye!",flag = false;break;
            default : flag = 0;break;
        }
    }
    delete[] pointer;
    return 0;

}

void menu()
{
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name     b. display by title" << endl;
    cout << "c. display by bopname  d. display by preference" << endl;
    cout << "q. quit" << endl;
}

void show_a(bop * pointer)
{
    for(int i = 0; i< 5; i++)
    {
        cout << (pointer + i)->fullname << endl;
    }
}

void show_b(bop * pointer)
{
    for(int i = 0; i< 5; i++)
    {
        cout << (pointer + i)->title << endl;
    }
}

void show_c(bop * pointer)
{
    for(int i = 0; i< 5; i++)
    {
        cout << (pointer + i)->bopname << endl;
    }
}

void show_d(bop * pointer)
{
    for(int i = 0; i< 5; i++)
    {
        cout << (pointer + i)->preference << endl;
    }
}