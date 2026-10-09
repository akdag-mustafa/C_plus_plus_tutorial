#include <iostream>
using namespace std;

int main()
{
    int number, o1 = 1, o2 = 0, fib = 0, buf;
    while (1)
    {
        fib = 0;
        o1 = 1;
        o2 = 0;
        cout << "Enter a number :";
        cin >> number;
        if (number == 0)
            return 0;
        cout << "fibonacci--> ";
        for (int i = 1; i < number; i++)
        { // satırı kontrol
            fib = o1 + o2;
            o2 = o1;
            o1 = fib;
            cout << fib << "\t";
        }
        cout << "\n";
    }
}