#include <iostream>
using namespace std;

void replaceVal(int *y);
int main()
{
    int x = 6;
    int &y = x;
    int *ptr = &x;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "&x is x " << &x << endl;
    cout << "&y is x " << &y << endl;
    cout << "ptr is " << ptr << endl;
    cout << "*ptr is " << *ptr << endl;
    *ptr = 10;
    cout << "*ptr is " << *ptr << endl;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    replaceVal(&x);
    cout << "x is " << x << endl;
    return 0;
}

void replaceVal(int *y)
{
    *y = 11;
}