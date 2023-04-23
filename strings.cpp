#include <iostream>
using namespace std;
int main(){
    string a = "Hello World";
    cout << a.length(); //string length
    cout << a[0]; //string access
    a[1] = 'a'; //string charecter update
    cout << a;

    string firstName = "Rawfid ", lastName = "Shuvo";
    string fullName = firstName + lastName;
    cout << fullName;
    cout << endl;

    cout << "Enter your full name:";
    cin >> fullName; //consider space as termination
    cout << fullName;
    cout << endl;

    cout << "Enter your full name:";
    getline(cin,fullName); //takes the full name with white space
    cout << fullName;
    cout << endl;

    string specialCharecter = "I am Rohan\'s best friend. we watched \"Titanic\" together. By the way \\ can be printed as well.";
     cout << specialCharecter; //backslash is used for special charecter in a string
     cout << endl;
}