#include<iostream>
#include<string>
#include<cctype>
int main()
{
    using namespace std;
    string word;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    while((cin >> word) && (word[0] != 'q'))
    {
        if (tolower(word[0]) == 'a' ||tolower(word[0]) == 'e'||tolower(word[0]) == 'i'||tolower(word[0]) == 'o'||tolower(word[0]) == 'u')
        {
            count1 ++;
        }
        else if (isalpha(word[0]))
        {
            count2 ++;
        }
        else{
            count3 ++;
        }
    }
    cout << "Number of words starting with a vowel: " << count1 << endl;
    cout << "Number of words starting with a consonant: " << count2 << endl;
    cout << "Number of words starting with neither a vowel nor a consonant: " << count3 << endl;
    return 0;
}