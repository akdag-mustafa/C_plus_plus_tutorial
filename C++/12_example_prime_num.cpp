#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, rootOfNumber;
    bool primeCheck;
    while (1)
    {
        cout << "Enter a number:";
        cin >> number;
        if (number == 0)
        {
            cout << "GoodBye" << endl;
            return 0;
        }
        if (number <= 2 && number > 1000)
        {
            cout << "Enter a number more than 2 and less than 1000" << endl;
            break;
        }
        rootOfNumber = sqrt(number);
        cout << "Root of " << number << "-->" << rootOfNumber << endl;
        cout << "prime numbers:";
        for (int i = 2; i <= number; i++)
        {
            primeCheck = true;
            for (int j = 2; j <= sqrt(i); j++)
            {

                if (i % j == 0)
                {
                    primeCheck = false;
                }
            }
            if (primeCheck)
                cout << i << "-";
        }
        cout << endl;
    }
}