#include <iostream>
using namespace  std ;
int main()
{
    // an = a + (n - 1) d
    // a= 1 , d = 1
    // an = 1 + (n - 1 ) 1
    // an = 2n - 1

    int first_term ;
    cout<<"Enter the First terms of AP : ";
    cin>>first_term;

    int difference ;
    cout<<"Enter the difference of AP : ";
    cin>>difference;

    int n ;
    cout<<"Enter the number of terms : ";
    cin>>n;

    int formula = first_term + (n-1)*difference;

    for (int i = first_term ; i >=0 ; i+=difference )
    {
        cout<<i<<endl;
    }

    for (int i = first_term ; i <= formula ; i+=difference )
    {
        cout<<i<<endl;
    }


}