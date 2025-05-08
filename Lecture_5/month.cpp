#include <iostream>
using namespace  std;

int main()
{
    int month ;
    cout<<"Enter a month number : " ;
    cin>>month ;

    switch (month)
    {
    case 1 :
        cout<<"January - 30 Days";
        break;
        case 2 :
        cout<<"February - 28 Days";
        break;
        case 3 :
        cout<<"March - 31 Days";
        break;
        case 4 :
        cout<<"April - 30 Days";
        break;
        case 5 :
        cout<<"May - 31 Days";
        break;
        case 6 :
        cout<<"June - 30 Days";
        break;
        case 7 :
        cout<<"July - 31 Days";
        break;

        case 8 :
        cout<<"August - 31 Days";
        break;
        case 9 :
        cout<<"September - 30 Days";
        break;
        case 10 :
        cout<<"October - 31 Days";
        break;
        case 11 :
        cout<<"November - 30 Days";
        break;

        case 12 :
        cout<<"December - 31 Days";
        break;

        default :
        cout<<"Invalid input";
    }
}