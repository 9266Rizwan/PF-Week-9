#include <iostream>
using namespace std;

main()
{
    system("cls");
    int answer;
    int size;
    int value;
    cout << "Enter number with which you want the product of an array : ";
    cin >> value;
    cout << "Enter number for array lenght : ";
    cin >> size ;
    int numbers[size];
    for (int idx=0; idx<size; idx++)
    {
        cout << "Enter number : ";
        cin >> numbers[idx];
    }
    for(int idx=size-1; idx>=0; idx--)
    {
        cout << numbers[idx]*value << " , " ;
    }
}