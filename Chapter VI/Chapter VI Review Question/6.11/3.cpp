#include<iostream>
int main()
{
    using namespace std;
    cout << "Please enter one of the following choices:" << endl;
    cout <<"\n"
    "c) carnivore p)pianist\n" 
    "t) tree g) game" << endl;
    char ch;
    int flag = 1;
    while(flag)
    {
        cin >> ch;
        switch (ch)
        {
        case 'c' : cout << "c" <<endl,flag = 0; break;
        case 'p' : cout << "p" <<endl,flag = 0; break;
        case 't' : cout << "A maple is a tree" <<endl,flag = 0; break;
        case 'g' : cout << "g" <<endl,flag = 0; break;
        default : cout << "Please enter a c, or g:"; 
        }
    }
    return 0;
}