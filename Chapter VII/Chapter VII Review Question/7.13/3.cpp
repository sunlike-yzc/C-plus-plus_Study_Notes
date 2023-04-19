#include<iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box pt);
void show_address(box * pointer);
int main()
{
    box pt = {
        "maker",
        21,33.5,157.3,33
    };
    show(pt);

    box * pointer = & pt;
    show_address(pointer);

    return 0;

}
void show(box pt)
{
    cout << pt.maker << endl;
    cout << pt.height << endl;
    cout << pt.width << endl;
    cout << pt.length << endl;
    cout << pt.volume << endl;
}
void show_address(box * pointer)
{
    cout << pointer->maker << endl;
    cout << pointer->height << endl;
    cout << pointer->width << endl;
    cout << pointer->length << endl;
    cout << pointer->height * pointer->width * pointer ->height << endl;
}