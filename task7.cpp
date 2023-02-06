#include <iostream>
using namespace std;
main()
{
    system("cls");
    string name;
    cout << "Enter name : ";
    getline(cin,name);
    cout << name.length() << endl ;
    int idx=0;
    while(name[idx]!='\0')
    {
        idx++;
    }
    for (int x=idx; idx>=0; idx--)
    {
        cout << name[idx];
    }
    
}