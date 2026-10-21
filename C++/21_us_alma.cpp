#include <iostream>
using namespace std;

float power(float a, float b)
{
    float x = a;
    for (int i = b; i > 1; i--)
    {
        x *= a;
    }
    return x;
}

int main()
{
    float sayi, us;
    while (1)
    {
        cout << "Enter the number:";
        cin >> sayi;
        if (sayi == 0)
            return 0;
        cout << "Enter the power:";
        cin >> us;
        cout << power(sayi, us) << endl;
    }
}