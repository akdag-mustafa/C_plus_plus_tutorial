#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    bool myCheck = true, primeCheck, endprogram = true;
    int buffer;

    while (endprogram)
    {
        myCheck = true;
        while (myCheck)
        {
            myCheck = false;
            cout << "Enter a possitive number:";
            cin >> number;
            if (number == 0)
            {
                cout << "Goodbye <3 <3" << endl;
                return 0;
            }
            if (number < 2)
            {
                cout << "\n Enter more than 2!" << endl;
                myCheck = true;
            }
        }
        buffer = sqrt(number);
        for (int i = 2; i <= buffer; i++)
        {
            if (number % i == 0)
                primeCheck = false;
            break;
        }
        cout << "Prime check status:" << primeCheck << endl;
        primeCheck = true;
    }
    return 0;
}