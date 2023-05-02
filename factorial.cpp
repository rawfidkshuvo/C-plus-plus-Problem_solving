#include<iostream>
using namespace std;

int main()
{
    int i, number, fact=1;

    cout << "Enter any positive number: ";
    cin >> number;

    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    cout << "\nFactorial of " << number << " is " << fact << "\n";

    return 0;
}