#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char c;
    int count = 0;
    ifstream file("donation.txt"); // 替换为要打开的文件名

    if (file.is_open()) 
    { // 如果成功打开文件
        while (file.get(c)) 
        { // 逐字符读取文件
            count++; // 统计字符数
        }
    file.close(); // 关闭文件
    cout << "File contains " << count << " characters." << endl; // 输出字符数
    }
    else
    { // 如果无法打开文件
        cout << "Failed to open file." << endl;
    }
    return 0;
}
