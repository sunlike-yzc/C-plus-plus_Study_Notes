//简单的字符匹配
#include<iostream>
int main()
{
    using namespace std;
    cout << "This program mat reformat your hard disk\n"
    << "and destroy all your data.\n" << "Do you wish to continue?<y/n>";
    char ch;
    cin >> ch;
    if(ch == 'y' || ch == 'Y')
    {
        cout << "You were warned!\a\a";
    }
    else if(ch == 'n' || ch == 'N')
    {
        cout << "A wise choice ... bye\n";
    }
    else
    cout << "That wasn't a y or n! Apparently you "
    << "can't follow\ninstructions, so "
    << "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}
//严格的字符比较使用string；
// #include <iostream>
// #include <string>  // 包含 string 类型所需的头文件

// int main()
// {
//     using namespace std;
//     string answer;  // 定义一个 string 类型的变量

//     cout << "This program may reformat your hard disk\n"
//          << "and destroy all your data.\n"
//          << "Do you wish to continue? <y/n> ";
//     cin >> answer;  // 读入字符串

//     if (answer == "y" || answer == "Y")  // 与字符串常量进行比较
//     {
//         cout << "You were warned!\a\a\n";
//     }
//     else if (answer == "n" || answer == "N")  // 与字符串常量进行比较
//     {
//         cout << "A wise choice ... bye\n";
//     }
//     else
//     {
//         cout << "That wasn't a y or n! Apparently you "
//              << "can't follow instructions, so "
//              << "I'll trash your disk anyway.\a\a\a\n";
//     }
//     return 0;
// }
