#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter a string : ";
    getline(cin,name);
    int length;
    length=name.length();
    int counter=0;
    for(int idx=0; idx<length; idx++)
    {
        if(name[idx]=='a' || name[idx]=='e' || name[idx]=='i' || name[idx]=='o' || name[idx]=='u')
        {
            counter++;
        }
    }
    cout << "Volwes are : " << counter;
}