#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done):" << endl;
    string ch;
    cin >> ch;
    int i = 0;
    while(ch != "done")
    {
        i++;
        cin >> ch;
    }
    cout << "You entered a total of " << i << " words." <<endl;
    return 0;
}