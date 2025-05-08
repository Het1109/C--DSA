#include <iostream>

using namespace std;

int main()
{
    char x ;
    cout<< "Enter the character : " ;
    cin>> x ;
    if (x >= 'a' && x <= 'z')
    {
        cout<<"Small Alphabet"<<endl;
    }

    else if (x >= 'A' && x <= 'Z')
    {
        cout<<"Big Alphabet"<<endl;
    }
    else
        cout<<"Not an Alphabet"<<endl;
    return 0;
}