#include<iostream>
#include<cmath>
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(polar * pda);
int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y) //输入不符合规矩的字符返回false，无限制此处任意字符即可
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two number (q and quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void show_polar(polar * pad)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pad->distance;
    cout << ", angle = " << pad->angle * Rad_to_deg;
    cout << " degrees\n";
}

void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance = 
        sqrt( pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
