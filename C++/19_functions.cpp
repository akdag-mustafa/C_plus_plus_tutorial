#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void print()
{
    cout << "function called" << endl;
}
void print_2(string s = "default yazi")
{
    cout << s << endl;
}
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    print();
    print_2();
    print_2("buraya yazdim");
    cout << sum(3, 6) << endl;

    cout << "befora swap x=" << x << "--" << "y=" << y << endl;
    swapNumbers(x, y);
    cout << "After swap x=" << x << "--" << "y=" << y << endl;
    return 0;
}