#include<iostream>
int main()
{
    using namespace std;
    cout << "Rnter the number of seconds: ";
    long long seconds;
    cin >> seconds;
    const int dayToHour = 24;
    const int hourToMinToSeconds = 60;
    int days = seconds / hourToMinToSeconds / hourToMinToSeconds / dayToHour;
    int hours = (seconds - (days * dayToHour * hourToMinToSeconds * hourToMinToSeconds)) / (hourToMinToSeconds * hourToMinToSeconds);
    int mins = (seconds  - (days*dayToHour*hourToMinToSeconds*hourToMinToSeconds + hours*hourToMinToSeconds*hourToMinToSeconds)) / (hourToMinToSeconds);
    int second = seconds - (days*dayToHour*hourToMinToSeconds*hourToMinToSeconds + hours*hourToMinToSeconds*hourToMinToSeconds + mins * hourToMinToSeconds);
    cout << seconds << " seconds = " << days << " days, " << hours 
    << " hours, " << mins << " minutes, " << second << " seconds";
    return 0;
}