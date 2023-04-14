#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while(choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n"; 
            case 2 : report();
                     break;
            case 3 : cout << "The boss was in all day.\n";
                        break;
            case 4 : comfort();
                    break;
            default : cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu(){
    cout << " emm... " <<endl;
}
void report()
{
    cout << " The " << endl;
}
void comfort()
{
    cout << " Sam " << endl;
}