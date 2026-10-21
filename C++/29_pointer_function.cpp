#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int multiple(int a, int b);
    int sum(int a, int b);
    int (*func)(int i, int j);
    while (1)
    {
        int number;
        srand(time(0));
        cout << "Enter a number";
        cin >> number;
        if (number == 0)
            return 0;
        func = multiple;
        cout << "Funtion pointer as multiple " << func(3, 4) << endl;
        func = &sum;
        cout << "Funtion pointer as sum " << (*func)(3, 4) << endl;
    }
}
int multiple(int a, int b)
{
    return a * b;
}
int sum(int a, int b)
{
    return a + b;
}