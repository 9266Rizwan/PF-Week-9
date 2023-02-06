#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the number for size of an array : ";
    cin >> size;
    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter a number : ";
        cin >> numbers[idx];
    }
    int flag;
    int smallest=numbers[idx];
    for(int x=0; x<size; x++)
    {
        if(smallest>numbers[x++])
        {
            smallest=numbers[x];
        }
    }
    cout << "Smallest is : " << smallest;
    
}