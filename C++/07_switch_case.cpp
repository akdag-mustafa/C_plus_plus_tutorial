#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char i;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "\nEnter ur operator:";
    cin >> i;

    switch (i)
    {
    case ('+'):
        cout << "result:" << a + b << endl;
        break;
    case ('-'):
        cout << "result:" << a - b << endl;
        break;
    case ('*'):
        cout << "result:" << a * b << endl;
        break;
    case ('/'):
        cout << "result:" << a / b << endl;
        break;
    default:
        cout << "Gecersiz operator!\n";
        break;
    }

    return 0;
}