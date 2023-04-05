#include<iostream>
using namespace std;
void blind();
void see();
int main()
{
    for(int i = 0; i < 2; i++)
    {
        blind();
    }
    for(int i = 0; i < 2; i++)
    {
        see();
    }

}
void blind()
{
    cout << "Three blind mice" <<endl;
}
void see()
{
    cout << "see how they run" <<endl;
}