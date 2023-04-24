#include <iostream>
using namespace std;

void charecterTypeCheck(string str)
{
    for(int i = 0; i <= str.length() - 1; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            cout << str[i] << " number.\n";
        }
        else if(str[i] >= 65 && str[i] <= 90)
        {
            cout << str[i] << " Capital.\n";
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            cout << str[i] << " small.\n";
        }
        else
        {
            cout << str[i] << " special.\n";
        }
    }
}

int main()
{
    string str;
    cout << "enter any string: ";
    cin >> str;
    charecterTypeCheck(str);
    return 0;
}