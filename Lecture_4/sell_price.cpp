#include <iostream>
using namespace std;
int main()
{
    int cost , sell ;
    cout<< "Enter the cost price : " ;
    cin>> cost ;

    cout<< "Enter the sell price : " ;
    cin>> sell ;

    if (cost == sell)
    {
        cout<<"PROFIT / LOSS : 0"<<endl;
    }

    if (cost < sell)
    {
        cout<<"PROFIT : "<<sell - cost <<endl;
    }

    else
    {
        cout<<"LOSS : "<<cost - sell <<endl;
    }
    return 0;

}

