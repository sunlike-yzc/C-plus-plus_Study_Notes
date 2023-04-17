#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
struct donation
{
    string name;
    double money;
};
int main()
{
    ifstream infile;
    cout << "Enter the concat file: ";
    char filename[20];
    cin.getline(filename, 20);
    infile.open(filename);
    if(!infile.is_open())
    {
        cout << "could not open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }
    int ArSize;
    string line;
    getline(infile, line);
    ArSize = stoi(line); // 将读取的字符串转换为整数
    donation * pointer = new donation [ArSize];
    for (int i = 0; i < ArSize; i++)
    {
        string line;
        getline(infile, line);
        (pointer + i)->name = line;
        getline(infile, line);
        (pointer + i)->money = stod(line); // 将读取的字符串转换为双精度浮点数
    }
    infile.close(); // 关闭文件
    
    for(int i = 0,j = 0; i < ArSize; i++, j++)
    {
        if(!j)
        {
            cout << "Grand Patrons" << endl;
        }
        if((pointer + i)->money > 10000)
        {
            cout << (pointer + i)->name << endl << (pointer + i)->money << endl;
        }
    }

    for(int i = 0, j = 0; i < ArSize; i++, j++)
    {
        if(!j)
        {
            cout << "Patrons" << endl;
        }
        if((pointer + i)->money < 10000)
        {
   
            cout << (pointer + i)->name << endl << (pointer + i)->money << endl;
        }
    }

    delete[] pointer;
    return 0;
}