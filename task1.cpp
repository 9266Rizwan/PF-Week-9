#include <iostream>
using namespace std;
int average(int counter,int sum);
main()
{
    int size;
    cout << "Enter the size of data : " ;
    cin >> size;
    int sum=0;
    int counter=0;
    int numbers[size];
    for(int idx=0; idx<size ; idx++)
    {
        cout << "Enter number : ";
        cin >> numbers[idx];
        sum=sum+numbers[idx];
        counter++;
    }
    int result;
    result=average(counter,sum);
    cout << result << endl ;
    cout << sum << endl ;

}
int average(int counter,int sum)
{
    int answer;
    answer=sum/counter;
    return answer;
}