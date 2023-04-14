#include<iostream>
const int Max = 5;
int main()
{
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for(i = 0; i < Max; i++)
    {
        cout << "rounds #" << i+1 << ": ";
        while(!(cin >> golf[i])) //清除cin缓存，若不清除缓存则'\n'依然保存在cin内，while为死循环
        {
            cin.clear();  //删除字节
            while(cin.get() != '\n')
            {
                continue;
            }
            // cin.ignore();  //忽略空格 '\n' 制表符等！
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for(i = 0; i < Max; i++)
    {
        total += golf[i];
    }
    cout << total / Max << " = average score " << Max << " rounds\n";
    return 0;
}