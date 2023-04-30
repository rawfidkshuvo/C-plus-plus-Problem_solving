#include<iostream>
#include<stdlib.h>
using namespace std;

void randomNumber(int times)
{
    int i;
    int number;

    cout << "Generating " << times << " Random Numbers between 0 to 100 -> ";

    for(i=1; i<=times; i++)
    {
        number = rand()%100; //get random number from 0 to 100
        cout << " " << number << " ";
    }
    cout << "\n";
}

void randomNumberWithRange(int times)
{
    int startingRange, endingRange;
    cout << "Range from: ";
    cin >> startingRange;
    cout << "Range to: ";
    cin >> endingRange;
    int range = endingRange - startingRange + 1;
    int i;
    int number;

    cout<<"Generating "<<times<< " Random Numbers between "<<startingRange<<" to "<< endingRange<<"-> ";

    for(i=1; i<=times; i++)
    {
        number = rand()%range + startingRange; //get random number from 0 to 100
        cout << " " << number << " ";
    }
    cout << "\n";
}

int main()
{
    int times;
    cout << "How many random numbers?: ";
    cin >> times;
    randomNumber(times);
    randomNumberWithRange(times);
    return 0;
}