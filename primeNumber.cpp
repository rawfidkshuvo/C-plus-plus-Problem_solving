#include<iostream>
using namespace std;

int main()
{
int i, number;
cout << "Enter a positive number: ";
cin >> number;

if(number == 1)
{
    cout << "\nYES! "<< number << " is the smallest prime number.\n";
}

for(i=2; i<number; i++)
{
    if(number%i == 0)
        {
        cout << "\nNO! The Number " << number << " is NOT a prime number.\n";
        break;
        }
}

if (i == number)
{
    cout<<"\nYES! The Number "<<number<<" is a prime number.\n";
}

return 0;
}