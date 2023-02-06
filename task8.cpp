#include <iostream>
using namespace std;
main()
{
    system("cls");
    int length ;
    char letter;
    string name;
    cout << "Enter name : ";
    getline(cin,name);
    cout << "Enter letter : ";
    cin >> letter;

    length=name.length();
    if(name[length-1]==letter)
    {
        cout << "Letter is same ";
    }
    else
    {
        cout << "Letter is not same ";
    }
    
}