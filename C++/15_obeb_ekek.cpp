#include <iostream>
using namespace std;

int main()
{
    int x, y, buffer, ebob, ekok;

    while (1)
    {
        ebob = 1;
        ekok = 1;
        cout << "Enter first number:";
        cin >> x;
        if (x == 0)
            return 0;
        cout << "Enter Second number:";
        cin >> y;

        // küçük sayıyı test ediyoruz.
        buffer = (x < y) ? x : y;
        // ebob
        for (int i = 1; i <= buffer; i++)
        {
            if (x % i == 0 && y % i == 0)
                ebob = i;
        }
        cout << "Ebob=" << ebob << endl;

        // ekok

        /* kısayolu
        // EBOB'u sıfırlamadan ve x, y'yi değiştirmeden:
        long long ekokSonuc = 1LL * (x / ebob) * y;
        cout << "Ekok=" << ekokSonuc << endl;

        */
        ebob = 1;
        // uzun yolu
        int j = 2;
        while (x > 1 || y > 1)
        {
            if (x % j == 0 && y % j == 0)
            {
                x /= j;
                y /= j;
                ekok *= j;
            }
            else if (x % j == 0)
            {
                x /= j;
                ekok *= j;
            }
            else if (y % j == 0)
            {
                y /= j;
                ekok *= j;
            }
            else
                j++;
        }
        cout << "Ekok=" << ekok << endl;
        ekok = 1;
    }
}