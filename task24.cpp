#include <iostream>
using namespace std;
main()
{
    int length;
    string name;
    cout << "Enter name : ";
    getline(cin,name);
    length=name.length();
    for(int idx=0; idx<length; idx++)
    {
        if(name[idx]=='a' || name[idx]=='e' || name[idx]=='i'|| name[idx]=='o' || name[idx]=='u')
        {
            continue;
        }
        cout << name[idx];
    }
}