#include <iostream>
using namespace std;

int main()
{
    int number = 20;
    do
    {
        cout << number << "\t";
        number++;
    } while (number < 10);
    cout << endl;

    for (int i = 0; i < number; i++)
    {
        if (i == 6)
            continue;
        cout << i + 1 << "\t";
    }

    return 0;
}