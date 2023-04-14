#include<iostream>
const int fave = 27;
int main()
{
    using namespace std;
    int n;
    cout << "Enter a number in the range 1-100 to find my favorite number: ";
    do{
        cin >> n;
        if(n < fave)
        {
            cout << "Too low -- guess again: ";
        }
        else if(n > fave)
        {
            cout << "Too high -- guess again: ";
        }
        else{
            cout << fave << " is rigth!" << endl;
        }
    }while(n != fave);
    return 0;
}