#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char word[5] = "?ate";
    for(char ch = 'a'; strcmp(word,"mate"); ch++) //不相等，非0，相等返回0;因此不相等会继续运行为true，相等则会直接跳出为false
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}