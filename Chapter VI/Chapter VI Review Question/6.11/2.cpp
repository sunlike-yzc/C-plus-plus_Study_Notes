#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 10> donations;
    double sum = 0;
    int count = 0;

    cout << "请输入数字，以非数字结束：" << endl;
    while (cin >> donations[count])     //cin在无效输入时，将会停止输入
    {
        sum += donations[count];
        count++;
    }

    if (count == 0)
    {
        cout << "没有输入数字！" << endl;
        return 0;
    }

    double average = sum / count;
    int above_average_count = 0;

    for (int i = 0; i < count; i++)
    {
        if (donations[i] > average)
        {
            above_average_count++;
        }
    }

    cout << "输入了 " << count << " 个数字" << endl;
    cout << "平均值为：" << average << endl;
    cout << "有 " << above_average_count << " 个数字大于平均值" << endl;

    return 0;
}
