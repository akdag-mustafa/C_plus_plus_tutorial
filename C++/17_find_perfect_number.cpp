/*
mükemmel sayılar bölenlerini toplamı kendisine eşit olan sayılar
*/

#include <iostream>
using namespace std;

int main()
{
    int number, buffer;
    while (1)
    {
        cout << "Enter a number:";
        cin >> number;
        if (number == 0)
            return 0;
        cout << "Perfect numbers-->   ";

        for (int j = 1; j < number; j++)
        {
            buffer = 0;
            for (int i = 2; i <= j; i++)
            {
                if (j % i == 0)
                    buffer += (j / i);
                // cout << "j is " << j << "buffer is " << buffer << endl;
            }
            if (buffer == j)
            {
                cout << j << "\t";
            }
        }
        cout << endl;
    }
}
