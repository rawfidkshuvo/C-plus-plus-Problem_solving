#include <iostream>
using namespace std;
//swap number without third variable
int main()
{
    int a,b;
    cout << "First number: ";
    cin >> a;

    cout << "Second number: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "First Number: " << a << endl;
    cout << "Second Number: " << b;
}