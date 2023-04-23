#include<iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left (const char * str, int n = 1);
using namespace std;
int main()
{
    const char * trip = "Hawaii!!";  //字符串字面值通常会存储在程序的只读存储区域中，因此修改字符串字面值是未定义的行为
    unsigned long n = 12345678;
    int i;
    char * temp;

    for(i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete[] temp;
    }
    return 0;
}

unsigned long left (unsigned long num, unsigned ct)
{   
    unsigned digits = 1;
    unsigned long n = num;

    if( ct == 0 || num == 0)
    {
        return 0;
    }
        while(n /= 10)
        {
            digits++;
        }
    if(digits > ct)
    {
        ct = digits - ct;
        while(ct--)
        {
            num /= 10;
        }
        return num;
    }
    else{
        return num;
    }
}

char * left(const char * str, int n)
{
    if(n < 0)
    {
        n = 0;
    }
    char * p = new char [n + 1];
    int i;
    for(i = 0; i < n; i++)
    {
        p[i] = str[i];
    }
    while(i <= n)
    {
        p[i++] = '\0';
    }
    return p;
}