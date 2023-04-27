#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 0, num, remainder, newNum = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    int temp = num;
    while(num != 0)
    {
        remainder = num % 10;
        num /= 10;
        i++;
    }
    num = temp;
    while(num != 0)
    {
        remainder = num % 10;
        num /= 10;
        newNum += pow(remainder,i);
    }
    if(newNum == temp){
        cout << temp << " is an Armstrong number.";
    }
    else{
        cout << temp << "is NOT an Armstrong number.";
    }
}