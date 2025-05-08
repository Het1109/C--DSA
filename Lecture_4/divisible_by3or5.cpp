#include <iostream>
using namespace std;
int main()
{
    int x ;
    cout<< "Enter the number : " ;
    cin>> x ;
    if ( (x % 5 ==0) || (x % 3 == 0) )
    {
        if (x == 15)
            cout<<"Not 15"<<endl;
        else

            cout<<"Divisible by 5 or 3"<<endl;
    }

    if ( ((x % 5 ==0) || (x % 3 == 0) ) && (x != 15))
    {
        cout<<"Divisible by 5 or 3"<<endl;
    }

    else
    {
        cout<<"Not Divisible by 5 or 3"<<endl;
    }
    return 0;
}