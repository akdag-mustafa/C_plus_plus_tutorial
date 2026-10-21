#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
    while (1)
    {
        int number;
        cout << "Enter A number:";
        cin >> number;
        if (number == 0)
            return 0;
        int array1[number][number], array2[number][number], array_crossed[number][number];
        cout << "------Array 1---------" << endl;
        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                array1[i][j] = rand() % 10 + 1;
                array_crossed[i][j] = 0;
                cout << array1[i][j] << "-";
            }
            cout << "\b \b" << endl;
        }
        cout << "------Array 2---------" << endl;
        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                array2[i][j] = rand() % 10 + 1;
                cout << array2[i][j] << "-";
            }
            cout << "\b \b" << endl;
        }

        cout << "------Array cross---------" << endl;
        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                for (int k = 0; k < number; k++)
                {
                    array_crossed[i][j] += array1[i][k] * array2[k][j];
                }
                cout << array_crossed[i][j] << "-";
            }
            cout << "\b \b" << endl;
        }
    }
}
