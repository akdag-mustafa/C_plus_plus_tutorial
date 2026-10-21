#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    void funcDen(int *ptr, int number);
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
        int numbers[5] = {4, 3, 45, 2, 1};
        int *ptr = &numbers[0];
        cout << "ptr is " << ptr << endl;       // pointerdaki adress
        cout << "ptr+4 is " << ptr + 4 << endl; // pointerdaki adress +4

        cout << "\n*ptr is " << *ptr << endl;         // pointer adresindeki sayı
        cout << "*(ptr+1) is " << *(ptr + 1) << endl; // pointer+1 adresindeki sayı

        cout << "&ptr is " << &ptr << endl; // pointerın tutulduğu adres
        funcDen(ptr, number);
    }
}
void funcDen(int *ptr, int number)
{
    for (int i = 0; i < number; i++)
    {
        *(ptr + i) = i;
        cout << "func " << i << " is " << *(ptr + i) << endl;
    }
}