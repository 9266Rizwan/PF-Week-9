#include <iostream>
using namespace std;
main()
{
    system("cls");
    string name;
    cout << "Enter name : ";
    getline(cin,name);
    int idx=0;
    while(name[idx]!='\0')
    {
        //cout << "Charater " << name[idx] << " at index " << idx  << endl ;
        idx++;
    }
    cout << "Lenght of an array is : " << idx << endl ;
    if(idx%2==0)
    {
        cout << "Index of array is Even "; 
    }
    else
    {
        cout << "Index of array is Odd ";
    }
}