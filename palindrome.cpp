#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i= -1, remainder, newNum = 0;
    cout << "Enter a positive number: ";
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        i++;
    }
    n = temp;
    while(n != 0)
    {
         remainder = n % 10;
        n /= 10;
        newNum += remainder * pow(10,i);
        i--;
    }
    if(newNum == temp)
    {
        cout << temp << " is a palindrome number.";
    }
    else
    {
        cout << temp << " is NOT a palindrome number.";
    }
}