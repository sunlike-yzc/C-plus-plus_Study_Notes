#include<iostream>
#include<cctype>
int main()
{
    char ch;
    using namespace std;
    while((ch = cin.get()) != '@') //注意运算的优先级
    {
        if(islower(ch))
        {
            cout << char(toupper(ch));
        }
        if(isupper(ch))
        {
            cout << char(tolower(ch));
        }
    }
    return 0;
}