#include <iostream>
using namespace std;

int main()
{
    int number;

    while (1)
    {
        cout << "Enter a number bigger than 0:";
        cin >> number;
        int myArray[number][number];
        if (number == 0)
            return 0;
        for (int i = 0; i < number; i++)
        {
            cout << endl;
            for (int j = 0; j < number; j++)
            {
                myArray[i][j] = i + j;
                cout << myArray[i][j] << " - ";
            }
            cout << "\b\b \b";
        }
        cout << endl;
    }
}