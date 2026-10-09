#include <iostream>
using namespace std;

int main()
{
    int number, gap;
    while (1)
    {
        cout << "Enter a number :";
        cin >> number;
        if (number == 0)
            return 0;

        for (int n = 0; n < number; n++)
        {
            for (gap = 1; gap < number - n; gap++)
            {
                cout << "  ";
            }
            int deger = 1; // Her satır 1 ile başlar.

            for (int k = 0; k <= n; k++)
            {
                cout << deger;
                for (int l = 0; l <= 2; l++)
                {
                    cout << " ";
                }

                // Sonraki elemanı hesapla.
                if (k < n)
                    deger = deger * (n - k) / (k + 1);
            }
            cout << endl;
        }
    }
}