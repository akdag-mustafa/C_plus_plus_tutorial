#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int myArray[2][4], choise, buffer;
    void print(string s);
    void findEven();
    void findOdd();

    srand(time(0));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            myArray[i][j] = rand() % 20 + 1;
        }
    }
    do
    {
        print("Enter what do you want:");
        print("1-Read array");
        print("2-Write array");
        print("3-reverse index order");
        print("4-find odd numbers");
        print("5-find even numbers");

        print("0-exit");
        cin >> choise;
        if (choise == 0)
        {
            print("goodbye");
            return 0;
        }
        else if (choise == 1)
        {
            int a, b;
            print("which part of array [2][4]:");
            cin >> a >> b;
            cout << "array[" << a << "][" << b << "] is =" << myArray[a][b];
        }
        else if (choise == 2)
        {
            int a, b;
            print("which part of array [2][4]:");
            cin >> a >> b;
            cout << "array[" << a << "][" << b << "] is =" << myArray[a][b];
            print("Enter new val:");
            cin >> myArray[a][b];
        }
        else if (choise == 3)
        {
            cout << "orginal Array =";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << myArray[i][j] << "-";
                }
            }
            cout << "\b \b" << endl;
            cout << "reversed Array =";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << myArray[1 - i][3 - j] << "-";
                }
            }
            cout << "\b \b";
        }
        else if (choise == 4)
        {
            cout << "orginal Array =";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << myArray[i][j] << " -";
                }
            }
            cout << "\b \b" << endl;
            cout << "Odd numbers-->";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (myArray[i][j] % 2 == 1)
                        cout << myArray[i][j] << "-";
                }
            }
            cout << "\b \b" << endl;
        }
        else if (choise == 5)
        {
            cout << "orginal Array =";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << myArray[i][j] << " -";
                }
            }
            cout << "\b \b" << endl;
            cout << "Even numbers-->";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (myArray[i][j] % 2 == 0)
                        cout << myArray[i][j] << "-";
                }
            }
            cout << "\b \b" << endl;
        }
        else
        {
            print("kidding me");
        }
        cout << "\nif u Want to continue press any number 0 for exit";
        cin >> choise;
        if (choise == 0)
        {
            return 0;
        }

    } while (choise != 0);
    return 0;
}
void print(string s)
{
    cout << s << endl;
}
