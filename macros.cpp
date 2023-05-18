#include <iostream>
using namespace std;

#define AREA(x) (x * x) //function-like macro
#define CUBE(x) (AREA(x) * x) //chain macro
#define DAY 25 //object-like macro
//multiline macro
#define A 1,\
        2,\
        3


int main()
{
    int i = 3;
    cout << AREA(i);
    cout << CUBE(i);
    cout << DAY;

     int arr[] = { A };
 
    cout<<"Elements of Array are: ";
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
 
    return 0;

}