#include<iostream>
int main()
{
    using namespace std;
    string word = "?ate";
    for(char ch = 'a'; word != "mate"; ch++)    //运算符！=重载
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loops ends, word is " << word << endl;
    return 0;
}