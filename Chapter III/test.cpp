#include<iostream>
int main()
{
    using namespace std;
    char alarm = '\a';
    cout << alarm << "Don't do that again!\a\n";
    cout << "Ben \"Buggsie\" \"Hacker\nwas here!\n";
    cout << "Beep!\a" << endl;
    cout << "Let them eat g\u00E2teau.\n";
    int a = 88;
    cout << static_cast<char>(a);
    return 0;
}