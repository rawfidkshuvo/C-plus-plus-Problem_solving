#include <iostream>
using namespace std;

void pascalTriangleArray()
{
    
}

int main(){
    int n = 7;
    int currArr[n] = {1,1};
    int newArr[n] = {1,1};
    int x = 1;
    if(n == 1)
    {
        cout << currArr[0];
    }
    if (n >= 2)
    {
        cout << currArr[0] << "\n";
        cout << currArr[0] << " " << currArr[1] << "\n";
    }
    for (int i = 1; i<n-1; i++){
        for(int j=1; j<=i; j++){
            {
                newArr[j] = currArr[j-1] + currArr[j];
                newArr[j+1] = currArr[0];
            }
        }
        for(int k=0; k<i+2; k++){
            currArr[k] = newArr[k];
            cout << currArr[k] << " ";
        }
        cout << "\n";
    }
}