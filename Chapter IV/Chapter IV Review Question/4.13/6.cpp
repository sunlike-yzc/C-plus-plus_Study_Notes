#include<iostream>
struct CandyBar{
    char num[20];
    float weight;
    int k;
};
int main()
{
    using namespace std;
    CandyBar snacks[3] = {{.num = {'M','N'}, .weight = 4.3, .k = 55}, {.num = {'N','e'}, .weight = 4.3, .k = 55}, 
                            {.num = {'L', 'e'}, .weight = 4.3, .k = 55}}; //字符数组初始化要使用{}；以及使用引号将字符隔开
    cout << snacks[0].num << " "<< snacks[0].weight << " "<< snacks[0].k <<  endl;
    cout << snacks[1].num << " "<< snacks[1].weight << " "<< snacks[1].k <<  endl;
    cout << snacks[2].num << " "<< snacks[2].weight << " "<< snacks[2].k <<  endl;    
    return 0;
}