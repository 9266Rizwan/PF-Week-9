#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter no of resistors : ";
    cin >> size;
    float totalresistance[size];
    float answer=0;
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter resistance for resister " << idx+1 << " : ";
        cin >> totalresistance[idx];
    }
    for(int idx=0; idx<size; idx++)
    {
        answer=totalresistance[idx]+answer;
    }
    cout << "Total Resistance : " << answer << " ohms" ;
    
}