#include<iostream>
#include<string>
#include<cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
    << strlen(charr) << endl;            //未初始化，出现'\0'的位置随机
    cout << "Length of string in str before input: "
    << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You enter: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in charr after input: " << str.size() << endl;

    cout << R"(Jim "king" Tutt uses "\n" instrad of endl.)" <<endl;
    cout << R"+*("(fangtianjing wochiningmeng)")+*" <<endl;
    
    return 0;
}