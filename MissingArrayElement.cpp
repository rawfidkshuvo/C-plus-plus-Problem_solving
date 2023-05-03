#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,6,8,10};
    int temp = 1;
    for (int i=0; i<sizeof(a)/sizeof(int); i++){
        if(a[i] == temp){
            temp++;
        }
        else{
            cout << temp;
            i--;
            temp++;
        }
    }
    
    return 0;
}