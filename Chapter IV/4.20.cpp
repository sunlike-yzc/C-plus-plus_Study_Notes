#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and "; //显示bear
    cout << bird << endl; //显示wren

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps <<"!\n"; //显示animal
    cout << "Before using strcpy():\n";
    cout << "animal" << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}