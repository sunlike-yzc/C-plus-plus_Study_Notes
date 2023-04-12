// #include<iostream>
// #include<string>
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[ArSize];
//     cout << "Your name, please: ";
//     cin.getline(name, 20);
//     cout << "Here is your name, verticalized and ASCIIized:\n";
//     int i = 0;
//     while(name[i] != '\0')  //while(name[i])
//     {
//         cout << name[i] << ":" <<int(name[i]) << endl;
//         i++;
//     }
//     return 0;
// }
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    const int ArSize = 20;
    string name;  // 将char数组的定义改为string类型
    cout << "Your name, please: ";
    getline(cin, name); // 使用getline()函数读取输入
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while(i < name.size())  // 将循环条件改为使用string对象的size()方法
    {
        cout << name[i] << ":" <<int(name[i]) << endl;
        i++;
    }
    return 0;
}
