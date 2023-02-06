#include <iostream>
using namespace std;
main()
{
    int data[2];
    cout << "Enter 1st Array data : ";
    cin >> data[0];
    cout << "Enter 1st Array data : ";
    cin >> data[1];

    int size;
    cout << "Enter size of 2nd Array : ";
    cin >> size;
    int array2[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter data : ";
        cin >> array2[idx];
    }
    size=size+2;
    int resultarray[size];
    resultarray[0]=data[0];
    resultarray[size-1]=data[1];
    for(int idx=0; idx<size; idx++)
    {
        resultarray[idx+1]=array2[idx];
    }
    resultarray[size-1]=data[1];
    for(int idx=0; idx<size; idx++)
    {
        cout << resultarray[idx] << " , ";
    }
    
    
}