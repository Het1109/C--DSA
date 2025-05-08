#include <iostream>
using namespace std;
int main()
{
    int first;
    cout<<"Enter the first term of GP : ";
    cin>>first;

    int ratio ;
    cout<<"Enter the ratio of GP : ";
    cin>>ratio;

    int n ;
    cout<<"Enter the number of terms : ";
    cin>>n;

    for (int i = 1 ; i <=n ; i++)
    {
        cout<<first<<endl;
        first = first * ratio;
    }



}