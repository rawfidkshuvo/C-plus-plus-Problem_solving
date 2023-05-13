#include <iostream>
using namespace std;

int main()
{
    int n,remainder = 0;
    cout << "Enter a positive number: ";
    cin >> n;
    while(n != 0)
    {
        remainder += n % 10;
        n = n / 10;
    }
    cout << "The sumation of the digits is " << remainder;
}