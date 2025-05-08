#include <iostream>
using namespace std;

int main()
{

    int dividend = 10, divisor = 3;
    int quotient = dividend / divisor;
    // dividend  = (divisor * quotient) + remainder
    // remainder = dividend - (divisor * quotient )

    cout << dividend - (divisor * quotient) << endl;
    int remainder = dividend % divisor;
    cout << remainder;
}