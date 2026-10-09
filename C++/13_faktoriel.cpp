#include <iostream>
using namespace std;
int main()
{
    unsigned int number;
    int faktoriel = 1;
    while (1)
    {
        cout << "Enter a number:";
        cin >> number;
        if (number == 0)
            return 0;
        for (int i = 1; i <= number; i++)
        {
            faktoriel *= i;
        }
        cout << number << " of faktoriel=" << faktoriel << endl;
        faktoriel = 1;
    }
}