#include<iostream>
#include<string>
using namespace std;
struct  free_throw{
    string name;
    int made;
    int attempts;
    float precent;
};
void display(const free_throw & ft);
void set_pc(free_throw & ft);
free_throw & accumulate(free_throw & target, const free_throw & source);

int main()
{
    free_throw one = {"Ifelsa Branch", 13, 14};
    free_throw two = {"Andor Knott", 10, 16};
    free_throw three = {"Minnie Max", 7, 9};
    free_throw four = {"Whily Looper", 5, 9};
    free_throw five = {"Long Long", 6, 14};
    free_throw team = {"Throwgoods", 0, 0};
    free_throw dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    display(accumulate(team, two));

    accumulate(accumulate(team, three), four);
    display(team);
    
    dup = accumulate(team, five);
    cout << "Display team:\n";
    display(team);

    cout << "Display dup afer assignment:\n";
    display(dup);
    set_pc(four);

    accumulate(dup, five) = four;
    cout << "Display dup afer ill-advised assignment:\n";
    display(dup);
    return 0;
}

void display(const free_throw & ft)
{
    cout << "name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.precent << '\n'; 
}

void set_pc(free_throw & ft)
{
    if(ft.attempts != 0)
    {
        ft.precent = 100.0f *float(ft.made) / float(ft.attempts);
    }
    else
    {
        ft.precent = 0;
    }
}

free_throw & accumulate(free_throw & target, const free_throw & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}