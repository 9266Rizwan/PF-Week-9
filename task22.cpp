#include <iostream>
using namespace std;
main()
{
    string names[4]={"Quarter","Dime","Nickel","Penny"};
    float money[4];
    float price;
    float sum;
    cout << "Enter Price of Product : ";
    cin >> price ;
    cout << endl ;
    for(int idx=0; idx<4; idx++)
    {
        cout << "Enter " << names[idx] << " : ";
        cin >> money[idx];
    }
    money[0]=money[0]*0.25;
    money[1]=money[1]*0.10;
    money[2]=money[2]*0.05;
    money[3]=money[3]*0.01;
    sum=money[0]+money[1]+money[2]+money[3];
    if(sum>=price)
    {
        cout << "Total money : " << sum << endl ;
        cout << "True";
    }
    else
    {
        cout << "Total money : " << sum << endl ;
        cout << "False";
    }
}