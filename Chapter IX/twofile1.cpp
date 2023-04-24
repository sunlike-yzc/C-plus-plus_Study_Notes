#include<iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    cout << &harry << " = &harry\n"; //静态全局变量，新变量覆盖旧变量，屏蔽twofile2中的变量
    return 0;
}