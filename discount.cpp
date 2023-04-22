#include <iostream>
using namespace std;
float discountedPrice (float price, float discount){
        
        float sum =  price + (price * discount) / 100;
        return sum;
}

float interestRate(float mainAmount,float rate, int month){
        float interestPerMonth = mainAmount * rate / 100;
        float interest = interestPerMonth * month;
        return interest;
}
int main(){
        cout << discountedPrice(121,33) << endl;
        cout << interestRate(3546,4.08,6) << endl;
}