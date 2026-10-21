#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int number;
        cout << "Enter a number:";
        cin >> number;
        int myArray[number][number];
        if (number == 0)
            return 0;

        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                if (i == j || (i + j) == (number - 1))
                {
                    myArray[i][j] = 1;
                    cout << "1 ";
                }

                else
                {
                    myArray[i][j] = 0;
                    cout << "0 ";
                }
            }
            cout << "\b \b";
            cout << endl;
        }
    }
}