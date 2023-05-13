#include <iostream>
using namespace std;
int remainder(int x, int y){
    int m = x % y;
    return m;
}

int main(){
    cout << remainder(9,5);
}