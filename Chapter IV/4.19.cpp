#include<iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double * pw = wages;
    short * ps =  stacks;
    cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;
    cout << ps <<" " << * ps << endl;
    ps = ps + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << ps << " " << * ps << endl << endl;
    cout << stacks[0] << " " << stacks[1] << endl;
    cout << * stacks << " " << *(stacks + 1) <<endl;
    cout << sizeof(wages) << endl;
    cout << sizeof(pw) << endl;
    return 0;
    
}