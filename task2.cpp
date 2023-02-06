#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter a number for size of an array : ";
    cin >> size ;
    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter a number : ";
        cin >> numbers[idx];
    }
    for(int idx=size-1; idx>=0; idx--)
    {
        cout << numbers[idx] << " , ";
    }
}