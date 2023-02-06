#include <iostream>
using namespace std;

main()
{
    system("cls");
    int flag=0;
    int size;
    cout << "Enter size of array : ";
    cin >> size ;
    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter number : ";
        cin >> numbers[idx];
    }
    int searchvalue;
    cout << "Enter number you are looking for : ";
    cin >> searchvalue;
    for(int x=0; x<size; x++)
    {
        if(searchvalue==numbers[x])
        {
            flag++;
        }
    }
    if(flag>0)
    {
        cout << "Yes this exists in an array ";
    }
    else
    {
        cout << "No! this number doesn't exist in this array";
    }
}