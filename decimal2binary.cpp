#include <iostream>
#include <cmath>
using namespace std;
void decimalToBinary(int decimal){
    int i = 0;
    int bin[100];

    while(decimal != 0){
    int remainder = decimal % 2;
    decimal = decimal / 2;
    bin[i] = remainder;
    i++;
    }

    for(int j=i-1; j>=0; j--){
        cout << bin[j];
    }
}

void binaryToDecimal(int binary){

       int  decimal = 0, remainder, i = 0;
        while(binary != 0){
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2,i);
        i++;
        }

        cout << decimal;
}


int main(){
    int decimal;
    int binary;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    decimalToBinary(decimal);
    cout << endl;
    
    cout << "Enter a binary number: ";
    cin >> binary;
    binaryToDecimal(binary);
}