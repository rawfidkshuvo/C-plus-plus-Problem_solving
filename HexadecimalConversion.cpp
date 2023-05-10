#include <iostream>
#include <cmath>
using namespace std;

void decimalToHexadecimal(int decimal){
  string hexaDecimalNumber = "";
  while (decimal != 0){
    int remainder = decimal % 16;
    decimal /= 16;
    if (remainder < 10)
      hexaDecimalNumber = char(48 + remainder) + hexaDecimalNumber; //ASCII charecter of value by char()
    else
      hexaDecimalNumber = char(55 + remainder) + hexaDecimalNumber;
  } 
      cout << hexaDecimalNumber;
}

void hexaToDecimal(string hexa){
  int decimal = 0;
  int j = hexa.length() - 1;
  for(int i =0; i <= hexa.length() - 1; i++){
    if (int(hexa[i]) >= 65)
      decimal += (int(hexa[i]) - 55) * pow(16,j); // ASCII value of charecter by int();
    else
      decimal += (int(hexa[i]) - 48) * pow(16,j);
    j--;  
  }
  cout << decimal;
}
int main(){
  int decimal;
  cout << "Enter a decimal number: ";
  cin >> decimal;
  decimalToHexadecimal(decimal);
  cout << endl;

  string hexa;
  cout << "Enter a hexadecimal number: ";
  cin >> hexa;
  hexaToDecimal(hexa);
  return 0;
}