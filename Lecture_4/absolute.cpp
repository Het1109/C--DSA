#include <iostream>
using namespace std;
int main()
{
    int x ;
    cout<< "Enter the number : " ;
    cin>> x ;

    if (x<0)
    {
        cout<<"Absolute number : "<<-x<<endl;
    }

    else
    {
        cout<<"Absolute number : "<<x<<endl;
    }
    return 0;

}

