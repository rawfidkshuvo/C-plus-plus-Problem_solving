#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter a charecter: ";
    cin >> x;
    //takes 1 or 0
    int isLowerVowel = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' );
    int isUpperVowel = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' );
    //check boolean
    if(isUpperVowel || isLowerVowel)
    {
        cout << "The charecter is vowel";
    }
    else
    {
        cout << "The charecter is consonant";
    }  
}