#include <iostream>
using namespace std;

void fibonacci(int times)
{
    int firstNum = 0;
    int secondNum = 1;
    int series;
    for (int i=1; i<=times; i++){
        if (i == 1)
        {
            cout << firstNum;
        }
        else if (i == 2)
        {
            cout << ", " << secondNum;
        }
        else
        {
        series = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = series;
        
        cout << ", "<< series;
        }
    }
}

int main(){
    int times;
    cout << "How many terms?: ";
    cin >> times;
    fibonacci(times);
    return 0;
}