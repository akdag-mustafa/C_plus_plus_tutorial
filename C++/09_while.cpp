#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while (i < 5)
    {
        cout << "The number is:" << i << endl;
        i++;
    }

    int a = 1, b = 1;
    while (a <= 10)
    {
        b = 1;
        while (b <= 10)
        {
            cout << a << "*" << b << "=" << a * b << "  ";
            b++;
        }
        cout << "\n";
        a++;
    }

    return 0;
}