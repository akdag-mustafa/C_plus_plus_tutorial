#include <iostream>
using namespace std;

int main()
{
    int smallNumber = 0, bigNumber = 0, number;
    while (1)
    {
        cout << "Enter a new number:";
        cin >> number;
        if (number == 0)
            return 0;
        if (number < smallNumber)
            smallNumber = number;
        if (number > bigNumber)
            bigNumber = number;
        cout << "small:" << smallNumber << "\tbig:" << bigNumber << endl;
    }
}