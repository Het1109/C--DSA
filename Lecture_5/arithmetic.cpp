#include <iostream>
using namespace std;
int main()
{
    int a , b ;
    cout<<"enter two numbers : ";
    cin >> a >> b ;
    char op ;
    cout<<"enter an operator : ";
    cin >> op ;
    switch (op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"invalid input";

    }
}