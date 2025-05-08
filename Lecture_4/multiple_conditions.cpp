#include <iostream>
using namespace std;
int main()
{
    int x ;
    cout<< "Enter the number : " ;
    cin>> x ;
    if (x > 99 && x < 1000)
    {
        cout<<"3 Digit Number"<<endl;
    }

    else
    {
        cout<<"Not a 3 Digit Number"<<endl;

    }
    return 0;
}